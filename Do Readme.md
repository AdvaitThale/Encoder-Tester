# Encoder-Tester
Designed a Encoder tester for Orange 400 PPR 2 phase Incremental Encoder without any microcontroller

Author: Advait Thale

***********************************************************************************************************************************************************************

I designed this encoder tester in 2021 as it was given me as a task from my Robocon team. The encoder tester is only made with glue logic ICs without any microcontroller. The main intension of this device is to save pins of microcontroller and to make it independent of any system and portable.
I used Up/Down counter to count pulses and to check whether to increment or decrement. But it still requires a clock signal so a D flipflop directly between counter and encoder output solves the problem. For U/D counter, 74LS190 is being used along with two 7447 BCD decoders driving two 7 segment displays. 

On clockwise rotation,
count will be incremented on each rising edge
i.e. when A is HIGH, B is LOW

On anticlockwise rotation,
count will be decremented on each rising edge
i.e. when A is HIGH, B was already HIGH

***********************************************************************************************************************************************************************

Some details about encoder:
Pulse Per Revolution: 400 (PPR) 2 phase
Counts Per Revolution: 1600 (CPR)
Max. RPM: 5000 (RPM)


Pinout for Orange 400PPR 2 Phase Encoder:
+---------------------+
|Vcc| Gnd |  A  |  B  | (Gnd)     <= Pins 
|Red|Black|Green|White|(Gauze)    <= Wire color
+---------------------+


Some additional details to design your own tester:
Accuracy = (360 / 2 * Resolution) * Degree of accuracy

to get resolution,
Resolution(N) = 360 / Degree of rotation(I)

Note:
While measuring counts per revolution, we'll measure 2 rising and 2 falling edges. 
B is 90° out of phase with A

           
