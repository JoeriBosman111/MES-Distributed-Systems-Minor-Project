# MES-Distributed-Systems-Minor-Project
Git Repository for all MES DS Minor Project Files

This repository contains a complete HANCoder folder. All software iterations are saved and appended with \_Vn, where n is the iteration based on chronological order.
In the "Target" folder the \_startup.m and .slx files can be found. For easiest implementation of this software, the entire repository is to be cloned onto the local drive or the computer, and open the desired file using MATLAB 2023a or later. 

# Latest Version: V52
!!! V52 only allows for tractor and trailer 1 !!!

- Version V6 allows for complete system with two trailers, but is untested!

# Board setup:
- 9 (or 6) Olimex STM32-E407 microcontrollers
- 2 CAN bus channels @ 500 Kb/s
- 1 Potentiometer per FCU (Trailer or tractor)
  - Connected to all nodes @ A1
- 

# V52 Settings
- Hardware granularity: 1 MHz
- Local clock granularity: 1 KHz
- Boards eligeble for (time) master role: ID 1, 2 and 3 (All tractor boards)
- 

