---
# permalink: /Team_B/
 title: Team B - Kitchen A.I.D.
 layout: single
 classes: wide
---

<p align="center">
<br>
<br>
<img width ="600" src ="/assets/images/kitchen/KitchenAID.jpg">
<br>
</p>

## Final Presentation [Download](/assets/PDF/KitchenAIDPresentation.pdf)

## The Problem:

For blind and low vision persons it is hard to cook complex and/or healthy meals because so much of the process is vision dependent and blind/low vision issues are often overlooked.

## The Solution:

An Invention to address this problem would be:
A modular, low-vision or blind kitchen aid system called, “Kitchen A.I.D.”

## Invention Attributes:

**Minimum Requirements**:

Read recipes to the user at a controllable pace
Connect them to synced devices including-- 
A measuring device
Thermometer
Audible Labels

**Secondary Goals**:

Easy to understand user interface
Text to speech integrated into the system (instead of pre recorded recipes)
Scale synced to the rest of the system

**Reach Goals**:

we would like to have devices that listen to the user/speech to text.

## History and Context:

- According to the World Health organization, 29 out of every million people in America suffer from 
a visual impairment. 
- It can be hard for blind people to distinguish between ingredients that feel the same.
- Many recipes can rely on visual cues that can’t be easily used by the blind.
- While many devices exist that aid cooking for the blind, some of them like talking measuring jugs 
are not as accurate as some people would like.
- Some blind cooks rely on their sense of hearing or smell to tell when something is fully cooked.
- There are already talking things to help with visually impaired people cooking
- The American foundation for the blind reports it helps to use light coloured cutting boards for 
dark coloured food and vice versa.
- A blind chef on masterchef has her kitchen organised so that everything goes exactly in the same 
spot it came from. 
- Blind foodie Neil Barnfather adheres to a strict system for preparing vegetables, "When chopping, 
I tend to put the unchopped on the left, work in progress in the middle and finished on the right. 
This saves time and avoids confusion."

## Design Ideas:

<p align="center">
<img src="/assets/images/kitchen/sketch1.JPG">
</p>

### Operation Order:
1. User turns on system
2. Device enters recipe select mode
3. User selects one by moving through each one, with the system reading the name of each
4. If user for any reason wants to change which recipe they are making they can back out
5. Device reads off ingredients by category and helps measure any liquid ingredients
6. Device reads off steps by category and helps with any temperature sensitive steps
7. Device reads off ingredients and steps of the same category first then changes category
8. If any steps mix categories, they will come after all the categories are read off


## Subsystem Map:

## BOM (Bill of Materials):
### Mechanical:
- Case:
- 1/4” ply 
- Buttons:
- #4 sheet metal screws or 4-40 or M2.5 machine screws
- Need some sort of casing around thermometer - possibly metal with rubber handle

### Electrical
- Arduino 
- Speaker
- SD Card Reader and Op Amp in one “WAV shield”
- Temp sensor
- Weight sensor (possibly)
- AV/DC adapter
 
### Programming (Libraries)
- WAV files from SD card
- Reading JSON files
- SD card file system
- RTC timer

## Final Product:
<p align="center">
<img width ="600" src ="/assets/images/kitchen/KitchenAID.jpg">
</p>

Small Kitchen Appliance with multiple sensors for weight, and temperature that reads recipes
aloud at the user’s pace. 
- The sensors are integrated into the recipe sequence.
- Recipes can be read at a user’s controlled pace.
- Temperature Sensor is able to be used if needed.
- User interface is simple.
