
set MATLAB=C:\Program Files\MATLAB\R2022a

"%MATLAB%\bin\win64\gmake" -f HANcoder_Olimexino.mk SHELL= HANcoder_PORTABLE=1 HANcoder_BOOTLOADER=1 GENERATE_ASAP2=1 OPTS="-DTID01EQ=0"
