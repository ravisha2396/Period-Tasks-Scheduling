.. _hello_world:

Periodic Task Scheduling
###########

Overview
********

The program in this project runs a number of threads which carry out periodic computations. The tasks for the threads are defined in a predefined c header file. The implementation is on a NXP MIMXRT1050EVK board with a ARM cortex M processor. 

Building and Running
********************

This application can be built and executed on NXP MIMXRT1050EVK board as follows:

1. Copy and unzip the assignment_1.zip in the Zephyrproject workspace, then cd assignment_1/ from the terminal.
2. Run west build -b mimxrt1050_evk trace_app --pristine.
3. After a successful build, run west flash.
4. Open putty with the following Serial COnfiguration:
	port: /dev/ttyACM0
	Baud Rate: 115200
then click Open.
5. In the serial debug console, type in activate in the Shell, to activate the threads and start periodic computations.
 	

Sample Output
=============

Depending on the task definition in the task_model.h you will find log statements in the serial debug console printing "TASK DEADLINE WAS MISSED"
