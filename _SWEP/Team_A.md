---
# permalink: /Team_A/
 title: Team A - The Dispensary
 layout: single
 classes: wide
---

<p align="center">
<img width="600" src="/assets/images/medicine/dispensary.JPG">
<br>
</p>

## Final Presentation [Download](/assets/PDF/TheDispensaryPresentation.pdf)

## The Problem:

For people on medication, it can tend to be hard to remember to take their pills because as human beings, we have busy lives.

## The Solution:

An Invention to address this problem would be:
The Dispensary: A device, worn on the wrist that stores and dispenses medication, capable of reminding the user to take their medication at user-designated times. It would include both audible and physical methods to alert to user it is time to take his/her medication. 

## Invention Attributes:

**Minimum Requirements**:

- some sort of a reminder both audibly/visually/physically
- easily dispensable
- sturdy/strong/comfortable
- easy to use
- See quantity of pills


**Secondary Goals**:

- make it portable
- Able to fit under shirtsleeve 
- Smallest power source possible


**Reach Goals**:
- we can make it usable by hearing/vision impaired (braille) individuals
- Mini Wrist Flask?


## History and Context:

## Design Ideas:
- Mock up:
<p align="center">
<img width="600" src="/assets/images/medicine/armband_mockup.jpg">
</p>
- Living Hinges:
<p align="center">
<img src="/assets/images/medicine/living_hinge_samples.jpg">
</p>
- Sensors: RTC
- Tools: Laser Cutter, 3D Printer

## Subsystem Map: 

- Structural/Mechanical: Michael
  - Mechanical iris
    - Spring
    - lever 
    - Schematic
  - Armband [Joel] {testing in progress}
    - Living hinges (maybe fabric)
    - Container [michael] {done}    
      - For Pills, Electronics
      
- Electrical: Bao Truc
  - Power(battery)
    - Lithium Ion/other
    - Recharging(reach)
    - Container?
    - 9V?
  - Soldering
    - Soldering Shield (wires and stuff)
  - Microcontroller (Amazon Microcontroller)
  - Number pad
    - Size, Reset button
  - Button
    - (possibly)
  - Speaker (the tiny one)
  - Protoboard (breadboard)

- Programming: Philip
  - LCD screen [philip] {not done}
  - Time to take meds at the inputed time
  - RTC(Alarm Clock With LCD)
  - Yellow Blue LCD
  - Speaker 
    - (What sounds are we going to program?)
  - Microcontroller 
    - User interface
    - LCD, Speaker Output
    - Keypad/Joystick
      - Code


## BOM (Bill of Materials):

- Velcro
- Multiple shapes of pills for testing
- Plexiglass/acrylic/clear(window)
- Snap latch 
- Birch Plywood
- Teensy INSTEAD of uno(too big)
- Sturdy Fabric
- RTC(real time clock)
- OLED Screen
- 9V Battery
- LiIon Battery Pack + Charger(Maybe)

## Final Product:
<p align="center">
<img width="600" src="/assets/images/medicine/dispensary.JPG">
<br>
</p>

It is a medication reminder that is portable
and assists one in remembering when to
take their medication on time wherever they
are.

Our group was able to successfully code a
program with an audible reminder that goes
off at the user prescribed time and stop
when a button next to it is pressed. A
spacious box for medication is included in
the device.