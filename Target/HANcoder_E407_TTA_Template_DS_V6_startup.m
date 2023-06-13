
% This m-file will be run automatically when starting model 'HANcoder_E407'
% The name of the m-file must consist of the model name with the addition:
% '_startup'!
% This m-file will be run when loading the model because it is added to the
% model callbacks: see File->Model Properties->Model Properties->Callbacks

% In this m-file the signals and parameters for HANtune can be defined. As
% an example the signal LedValue and parameter HANtuneOverride are already
% defined.
% You can add your own signals and parameters to this m-file below

%% Measurements
LA_Task_Act = 1; % Change digital output to see task activation [A0]
LA_COMM_Err = 1; % Toggle DO when a COMM error happened in a bc [A1]
LA_MEX_Flag = 1; % Measure Execution Time for comp task [A2 init, A3 end]
LA_Clock_Gr = 1; % Clock activation for granularity measurement [A4]
LA_COMM_dly = 1; % Toggle DO for COMM delay measurement [CAN1:Tx D13,Rx D12, CAN2:Tx D9,Rx D8]
LA_E_Desync = 1; % Toggle DO right before resync at LT_Update [D10]

%% Constants
hardware_granularity = 1000000; % 1 MHz (1 tick/microsecond) <not operational - its selected in HANCoder>
frequency_IRQ = 100; % IRQ every 100 ticks of hardware clock -> local clock: 10 kHz
LED_ticks_toggle = 10000; % 10000 local ticks to toggle LED (toggles every 1 second with local tick ON)

% Roles
Free_Role = 0;
Master_Role = 1;
Slave_Role = 2;
% Boards
Tractor_Board1 = 1;
Tractor_Board2 = 2;
Tractor_Board3 = 3;

Trailer1_Board1 = 4;
Trailer1_Board2 = 5;
Trailer1_Board3 = 6;

Trailer2_Board1 = 7;
Trailer2_Board2 = 8;
Trailer2_Board3 = 9;

L0f = 5;
L0b = 0.5;
L1f = 6;
V1 = -0.000000001;
V2 = -0.000000001;

% COMMunication Model
COMM_Period = 120; % original is 40 ticks
% COMM_PHASE
% CAN1
% init
COMM_Phase_init1 = Simulink.Parameter; % Define as parameter
COMM_Phase_init1.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
COMM_Phase_init1.Value = 0;
% phase
COMM_Phase1 = Simulink.Parameter; % Define as parameter
COMM_Phase1.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
COMM_Phase1.Value = 10;
% CAN2
% init
COMM_Phase_init2 = Simulink.Parameter; % Define as parameter
COMM_Phase_init2.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
COMM_Phase_init2.Value = 5;
% phase
COMM_Phase2 = Simulink.Parameter; % Define as parameter
COMM_Phase2.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
COMM_Phase2.Value = 10;
% max number of messages
Tx_bit_number = 3; % This is hardcoded in the Tx buffer update of the COMM tasks
max_num_msgs_CAN1 = 2^Tx_bit_number-1;
max_num_msgs_CAN2 = max_num_msgs_CAN1;

% Basic Cycle: Time Master Election
DEBUG_wait = 20000; % insert this in a TM to make the system wait there for DEBUG
basic_cycle_start = 0;
COMM_duration = COMM_Period;
COMP_duration = 4;
%% Definition of Time marks
% Time mark types
COMM = 0;
COMP = 1;
% Time marks
% bc 0
% Sync message
TM_COMM_Sync        = basic_cycle_start;                % COMM Sync
TM_Data_bc0         = TM_COMM_Sync;
TM_Type_bc0         = COMM;
TM_Check_Sync       = TM_COMM_Sync   + COMM_duration;	% COMP Check Message
TM_Data_bc0(end+1)  = TM_Check_Sync;
TM_Type_bc0(end+1)  = COMP;
TM_Update_LT        = TM_Check_Sync  + COMP_duration;   % COMP LocalTime update (LA - Desync)
TM_Data_bc0(end+1)  = TM_Update_LT;
TM_Type_bc0(end+1)  = COMP;
TM_Update_LT_2      = TM_Update_LT   + 2;               % COMP LocalTime update (LT Update)
TM_Data_bc0(end+1)  = TM_Update_LT_2;
TM_Type_bc0(end+1)  = COMP;
TM_Vote_Dec         = TM_Update_LT   + COMP_duration;	% COMP Generate vote <Input gen.: Check TO>
TM_Data_bc0(end+1)  = TM_Vote_Dec;
TM_Type_bc0(end+1)  = COMP;
TM_Vote_Dec_2       = TM_Vote_Dec    + 2;               % <Input gen.: Reset Board>
TM_Data_bc0(end+1)  = TM_Vote_Dec_2;
TM_Type_bc0(end+1)  = COMP;
% Vote 1
TM_COMM_Vote1       = TM_Vote_Dec    + COMP_duration;   % COMM Vote 1
TM_Data_bc0(end+1)  = TM_COMM_Vote1;
TM_Type_bc0(end+1)  = COMM;
TM_Check_Vote1      = TM_COMM_Vote1  + COMM_duration;	% COMP Check Message
TM_Data_bc0(end+1)  = TM_Check_Vote1;
TM_Type_bc0(end+1)  = COMP;
TM_Count_Vote1      = TM_Check_Vote1 + COMP_duration;	% COMP Count vote
TM_Data_bc0(end+1)  = TM_Count_Vote1;
TM_Type_bc0(end+1)  = COMP;
% Vote 2
TM_COMM_Vote2       = TM_Count_Vote1 + COMP_duration;   % COMM Vote 2
TM_Data_bc0(end+1)  = TM_COMM_Vote2;
TM_Type_bc0(end+1)  = COMM;
TM_Check_Vote2      = TM_COMM_Vote2  + COMM_duration;	% COMP Check Message <Vehicle Em.: Check Time Outs>
TM_Data_bc0(end+1)  = TM_Check_Vote2;
TM_Type_bc0(end+1)  = COMP;
TM_Check_Vote2_2    = TM_Check_Vote2 + 2;               % <Vehicle Em.: Reset Board> 
TM_Data_bc0(end+1)  = TM_Check_Vote2_2;
TM_Type_bc0(end+1)  = COMP;
TM_Count_Vote2      = TM_Check_Vote2 + COMP_duration;	% COMP Count vote
TM_Data_bc0(end+1)  = TM_Count_Vote2;
TM_Type_bc0(end+1)  = COMP;
% Vote 3
TM_COMM_Vote3       = TM_Count_Vote2 + COMP_duration;   % COMM Vote 3
TM_Data_bc0(end+1)  = TM_COMM_Vote3;
TM_Type_bc0(end+1)  = COMM;
TM_Check_Vote3      = TM_COMM_Vote3  + COMM_duration;	% COMP Check Message
TM_Data_bc0(end+1)  = TM_Check_Vote3;
TM_Type_bc0(end+1)  = COMP;
TM_Count_Vote3      = TM_Check_Vote3 + COMP_duration;	% COMP Count vote
TM_Data_bc0(end+1)  = TM_Count_Vote3;
TM_Type_bc0(end+1)  = COMP;
% Postelection
TM_Check_TOuts      = TM_Count_Vote3 + COMP_duration;	% COMP Timeouts check
TM_Data_bc0(end+1)  = TM_Check_TOuts;
TM_Type_bc0(end+1)  = COMP;
TM_New_Master       = TM_Check_TOuts + COMP_duration;	% COMP MasterID Decision
TM_Data_bc0(end+1)  = TM_New_Master;
TM_Type_bc0(end+1)  = COMP;
TM_Reset_Var        = TM_New_Master  + COMP_duration;	% COMP Reset Variables
TM_Data_bc0(end+1)  = TM_Reset_Var;
TM_Type_bc0(end+1)  = COMP;
TM_Reset_Board      = TM_Reset_Var   + COMP_duration;	% COMP Reset Board
TM_Data_bc0(end+1)  = TM_Reset_Board;
TM_Type_bc0(end+1)  = COMP;

% bc 1
TM_Data_bc1 = TM_Data_bc0(1:4);
TM_Type_bc1 = TM_Type_bc0(1:4);

TM_ReadPot = TM_Update_LT_2 + COMP_duration;
TM_Data_bc1(end+1) = TM_ReadPot;
TM_Type_bc1(end+1) = COMP;
TM_COMM_PotValue1 = TM_ReadPot + COMP_duration;
TM_Data_bc1(end+1) = TM_COMM_PotValue1;
TM_Type_bc1(end+1) = COMM;
TM_Check_PotValue1 = TM_COMM_PotValue1 + COMM_duration;
TM_Data_bc1(end+1) = TM_Check_PotValue1;
TM_Type_bc1(end+1) = COMP;
TM_COMM_PotValue2 = TM_Check_PotValue1 + COMP_duration;
TM_Data_bc1(end+1) = TM_COMM_PotValue2;
TM_Type_bc1(end+1) = COMM;
TM_Check_PotValue2 = TM_COMM_PotValue2 + COMM_duration;
TM_Data_bc1(end+1) = TM_Check_PotValue2;
TM_Type_bc1(end+1) = COMP;
TM_COMM_PotValue3 = TM_Check_PotValue2 + COMP_duration;
TM_Data_bc1(end+1) = TM_COMM_PotValue3;
TM_Type_bc1(end+1) = COMM;
TM_Check_PotValue3 = TM_COMM_PotValue3 + COMM_duration;
TM_Data_bc1(end+1) = TM_Check_PotValue3;
TM_Type_bc1(end+1) = COMP;
TM_PotVote = TM_COMM_PotValue3 + COMP_duration;
TM_Data_bc1(end+1) = TM_PotVote;
TM_Type_bc1(end+1) = COMP;
TM_Reset_Var_bc1 = TM_Data_bc1(end) + COMP_duration;
TM_Data_bc1(end+1) = TM_Reset_Var_bc1;
TM_Type_bc1(end+1) = COMP;
TM_Reset_Var_bc1_2 = TM_Reset_Var_bc1 +2;
TM_Data_bc1(end+1) = TM_Reset_Var_bc1_2;
TM_Type_bc1(end+1) = COMP;
TM_Reset_Board_bc1      = TM_Reset_Var_bc1_2   + COMP_duration;	% COMP Reset Board
TM_Data_bc1(end+1)  = TM_Reset_Board_bc1;
TM_Type_bc1(end+1)  = COMP;

% bc 2
TM_Data_bc2 = TM_Data_bc0(1:4);
TM_Type_bc2 = TM_Type_bc0(1:4);

TM_COMM_Trailer1Articulation = TM_Update_LT_2 + COMP_duration;
TM_Data_bc2(end+1) = TM_COMM_Trailer1Articulation;
TM_Type_bc2(end+1) = COMM;
TM_Check_Trailer1Articulation = TM_COMM_Trailer1Articulation + COMM_duration;
TM_Data_bc2(end+1) = TM_Check_Trailer1Articulation;
TM_Type_bc2(end+1) = COMP;
TM_COMM_Trailer2Articulation = TM_Check_Trailer1Articulation + COMP_duration;
TM_Data_bc2(end+1) = TM_COMM_Trailer2Articulation;
TM_Type_bc2(end+1) = COMM;
TM_Check_Trailer2Articulation = TM_COMM_Trailer2Articulation + COMM_duration;
TM_Data_bc2(end+1) = TM_Check_Trailer2Articulation;
TM_Type_bc2(end+1) = COMP;
TM_InverseKinematics = TM_Check_Trailer2Articulation + COMP_duration;
TM_Data_bc2(end+1) = TM_InverseKinematics;
TM_Type_bc2(end+1) = COMP;

TM_Reset_Var_bc2   = TM_Data_bc2(end) + COMP_duration;
TM_Data_bc2(end+1) = TM_Reset_Var_bc2;
TM_Type_bc2(end+1) = COMP;
TM_Reset_Var_bc2_2 = TM_Reset_Var_bc2 +2;
TM_Data_bc2(end+1) = TM_Reset_Var_bc2_2;
TM_Type_bc2(end+1) = COMP;

% matrix scheduling constants
basic_cycle_duration_bc0 = TM_Reset_Board   + COMP_duration; % cycle duration in NTU
basic_cycle_duration_bc1 = basic_cycle_duration_bc0; % cycle duration in NTU
basic_cycle_duration_bc2 = basic_cycle_duration_bc0; % cycle duration in NTU
matrix_cycle_duration = basic_cycle_duration_bc0 + basic_cycle_duration_bc1 + basic_cycle_duration_bc2; % cycle duration in NTU
matrix_rows = 3;

% Message IDentification numbers
Sync_ID = 1;
Vote1_ID = 11;
Vote2_ID = 12;
Vote3_ID = 13;

PotValue1_ID = 22;
PotValue2_ID = 23;
PotValue3_ID = 24;

Trailer1_Articulation_ID = 31;
Trailer2_Articulation_ID = 32;

% Communication delay: time from message sent until message received
comm_delay_measured1 = 0.0003; % [1Mb/s -> 0.3 ms]
comm_delay_measured2 = 0.0003; % [250kb/s -> 0.7 ms]
comm_delay_estimation1 = ...
    round(comm_delay_measured1*hardware_granularity/frequency_IRQ); % comm_delay in ticks 
comm_delay_estimation2 = ...
    round(comm_delay_measured2*hardware_granularity/frequency_IRQ); 

% Maximum desync: maximum allowed ticks to be corrected by Desync (Update
% LT) during a basic cycle
max_desync = 15;
min_desync = (-1)*max_desync;

% Initialization
idle_time_init = basic_cycle_duration_bc0 + basic_cycle_duration_bc1 + basic_cycle_duration_bc2; % time waiting by Board 1 before becoming Master


%% Parameters
% Defining a parameter for editing in HANtune
% HANTune scripts ON/OFF control
script_run = Simulink.Parameter; % Define as parameter
script_run.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
script_run.DataType = 'double';
script_run.Value = 0; 

%% Signals
% Defining signals for viewing in HANtune
LedValue = Simulink.Signal; % Define as signal
LedValue.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
Quad_Encoder = Simulink.Signal; % Define as signal
Quad_Encoder.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
Motor_PWM_output = Simulink.Signal; % Define as signal
Motor_PWM_output.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
Motor_direction2 = Simulink.Signal; % Define as signal
Motor_direction2.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
Motor_direction1 = Simulink.Signal; % Define as signal
Motor_direction1.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
PID_value = Simulink.Signal; % Define as signal
PID_value.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

% Defining System Information Signals
SI_FreeStack = Simulink.Signal;
SI_FreeStack.StorageClass = 'ExportedGlobal';
SI_CPUload = Simulink.Signal;
SI_CPUload.StorageClass = 'ExportedGlobal';
SI_FreeHeap = Simulink.Signal;
SI_FreeHeap.StorageClass = 'ExportedGlobal';

%% Parameters
% Defining a parameter for editing in HANtune
HANtuneOverride = Simulink.Parameter; % Define as parameter
HANtuneOverride.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
HANtuneOverride.Value = 0; % Initial value is set to zero, no override

PID_gain = Simulink.Parameter; % Define as parameter
PID_gain.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
PID_gain.Value = 14; % Initial value is set to zero, no override

PID_integrator = Simulink.Parameter; % Define as parameter
PID_integrator.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
PID_integrator.Value = 5; % Initial value is set to zero, no override

PID_derivative = Simulink.Parameter; % Define as parameter
PID_derivative.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
PID_derivative.Value = 0.5; % Initial value is set to zero, no override


%% Bus type definitions
% Votes_count variable: data storage with the votes received for the Role poll
bussignal(1) = Simulink.BusElement;
bussignal(1).Name = 'First_Board';
bussignal(2) = Simulink.BusElement;
bussignal(2).Name = 'Second_Board';
bussignal(3) = Simulink.BusElement;
bussignal(3).Name = 'Third_Board';
vote_array = Simulink.Bus;
vote_array.Elements = bussignal;

% Message buffer type for Msg_Rx_CAN for CAN1 and CAN2
% The content of the messages received are stored with this type
Msg_Buffer(1) = Simulink.BusElement;
Msg_Buffer(1).Name = 'Buffer_1';
Msg_Buffer(1).DataType = 'uint8';
Msg_Buffer(2) = Simulink.BusElement;
Msg_Buffer(2).Name = 'Buffer_2';
Msg_Buffer(2).DataType = 'uint8';
Msg_Buffer(3) = Simulink.BusElement;
Msg_Buffer(3).Name = 'Buffer_3';
Msg_Buffer(3).DataType = 'uint8';
Msg_Buffer(4) = Simulink.BusElement;
Msg_Buffer(4).Name = 'Buffer_4';
Msg_Buffer(4).DataType = 'uint8';
Msg_Buffer(5) = Simulink.BusElement;
Msg_Buffer(5).Name = 'Buffer_5';
Msg_Buffer(5).DataType = 'uint8';
Msg_Buffer(6) = Simulink.BusElement;
Msg_Buffer(6).Name = 'Buffer_6';
Msg_Buffer(6).DataType = 'uint8';
Msg_Buffer(7) = Simulink.BusElement;
Msg_Buffer(7).Name = 'Buffer_7';
Msg_Buffer(7).DataType = 'uint8';
Msg_Buffer(8) = Simulink.BusElement;
Msg_Buffer(8).Name = 'Buffer_8';
Msg_Buffer(8).DataType = 'uint8';
msg_buffer_type = Simulink.Bus;
msg_buffer_type.Elements = Msg_Buffer;
