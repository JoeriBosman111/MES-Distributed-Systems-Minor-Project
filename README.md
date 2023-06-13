# MES-Distributed-Systems-Minor-Project
Git Repository for all MES DS Minor Project Files

This repository contains a complete HANCoder folder. All software iterations are saved and appended with \_Vn, where _n_ is the iteration based on chronological order.
In the "Target" folder the \_startup.m and .slx files can be found. For easiest implementation of this software, the entire repository is to be cloned onto the local drive or the computer, and open the desired file using MATLAB 2023a or later. 

A video presentation the functionality of the system can be found in folder _Videos_

## Latest Version: V52
!!! V52 only allows for tractor and trailer 1 !!!

- Version V6 allows for complete system with two trailers, but is untested!

# Using the hardware and software
## Board setup:
- 9 (or 6) Olimex STM32-E407 microcontrollers
- 2 CAN bus channels @ 500 Kb/s
  - All nodes (boards) are connected to both busses
- 1 Potentiometer per FCU (Trailer or tractor)
  - Connected to all nodes @ A1

Board ID's are determined by digital pins pulled HIGH (5V)
|Tractor|Trailer 1|Trailer2|
|-------|---------|--------|
|ID 1 (D2)|ID 4 (D4)|ID 7 (D2,D3,D4)|
|ID 2 (D3)|ID 5 (D2,D4)|ID 8 (D5)|
|ID 3 (D2,D3)|ID 6 (D3,D4)|ID 9 (D2,D5)|

## Using and flashing the software
The software is developed using MATLAB Simulink, and is based upon the TTA TTCAN template by Diego López. Follow this link to find the repository of the TTA template: https://github.com/pineapplezex/HANCoder_TTA.git

The software consists of two parts: 1) The .m file which includes the temporal settings, TTA schedule definition, Board ID's and CAN message ID's; 2) The Simulink model which implements HANCoder blocks to create the main software model of the system. The software works as a bundle, and the .m file should always have the same name as the .slx file, appended with \_startup.

To build and flash the, the Simulink Embedded Coder app is required. When enabled, this app provides the function to 'build and deploy' the software on the stm32 target. 

## V52 Settings
- Hardware granularity: 1 MHz
- Local clock granularity: 1 KHz
- Boards eligable for entry Matrix Cycle: trailer 1 and tractor
- Boards eligable for (time) master role: All tractor boards
- Number of Basic Cycles: 3
  - Basic Cycle 0: Time synchronization and master voting (Length: 372 local ticks)
  - Basic Cycle 1: Intra-FCU functions (Potentiometer reading and voting) (Length: 372 local ticks)
  - Basic Cycle 2: Inter-FCU functions (Atriculation angle communication and inverse kinematic model) (Length: 372 local ticks)

