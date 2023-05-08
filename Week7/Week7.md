# Week7

## PCB calibration 

We needed to calibrate three PCBs that are used in CNC milling machines. To do this, we connected each board to an Arduino Due board as illustrated in a picture. Unfortunately, the PCBs didn't function as expected after making the connections. We tried several methods to fix the issue but eventually discovered that the Arduino board was malfunctioning. To resolve the problem, we utilized an ESP 32 Development kit that employs pulse-width modulation (PWM) and installed its driver in the Arduino IDE. We operated the ESP32 board at a 50% duty cycle, and it worked correctly. We successfully calibrated all three PCBs as we needed them for three machines that will be sent out soon.

![](PCB%20calibration.jpeg "")


![](PCB%20settings.jpg "")

## Soldered PCB board

We Soldered two Teensy 4.1 boards with the pin headers. 

## Aluminium profile for Small CNC milling

To create a prototype of a small CNC machine for a workshop, we needed to construct and drill some parts. Our initial step was to check whether the holes on an aluminium rod aligned with the machine bed, but we discovered that they were not a perfect match. As a result, we had to apply some force to fit the screws. Next, we utilized a hand drill to create centre punches and drill four holes in the rod. We then used M5 bits to tap these holes. We repeated this process on another piece, creating four more holes through drilling and tapping. We chose to use the hand drill due to its precision and convenience in centre punching the holes. 
For the remainder of the week, we focused on drilling and tapping the various components required for the small CNC machine.

![](drilling%20small%20cnc.jpg "")