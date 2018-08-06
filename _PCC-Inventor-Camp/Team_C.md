---
# permalink: /Team_C/
 title: Team C - Car Heat Alert
 layout: single
 classes: wide
---

<p align="center">
<br>
<br>
<img width ="150" src ="/assets/images/IB_logo_small.png">
<br>
</p>



## The Problem:
For parents, guardians, pet owners, and care providers, it is hard to remember that a pet or child is in the car and could be exposed to extreme conditions because of outside distractions.


## The Solution:
The invention is an extreme temperature-activated notification system. It brings attention to pets and small children being left in cars in extreme temperatures.


## Invention Attributes:

**Minimum Requirements**:
-  A notification system that sends SMS to a user’s phone based on internal temperature of their car.

**Secondary Goals**:

- The invention will incorporate a temperature-activated fan.

**Reach Goals**:
- Make an app
- Develop an LCD keychain
- Include sensors to manage notifications, such as motion sensors and RTC

## History and Context:

Parents, guardians, caregivers, pet owners, and people in general, should always be aware of the danger of leaving an unattended kid or pet in a car. Even if it's not summer, temperatures in cars can rapidly climb, making it unsafe for children and pets. A test done by Consumer Reports showed that an outside temperature of 61° F could reach more than 105° F in a closed car in just an hour, exceeding the internal body temperature threshold for heat stroke in children. North Carolina Consumers Council reveals that the internal car temperature can rise more than 20° F in 10 minutes, even if it's cloudy. Unsafe temperatures in cars claim the lives of around 37 children annually, a number much too high. In more than half the situations, the child was forgotten. Other times, the adult was aware of where the child was. A child’s body heats up three to five times faster than an adult’s body. Dogs are more likely than children to be left in cars and can be more sensitive to heat as well. It is imperative that you take measures to ensure the safety of children and pets in cars.

Devices that monitor internal car temperature and notify the car owner are available, but it seems that most of them are made for dogs/pets. Some devices send text message alerts to a phone or keychain while others are attachable to a pet collar. These devices usually cost around $100-$200.

__Sources:__
- https://www.ncconsumer.org/news-articles/summer-safety-leaving-babies-and-pets-in-hot-cars-can-be-deadly.html
- https://www.care2.com/causes/hot-cars-pose-a-serious-danger-to-children-and-pets.html
- http://blog.driversed.com/children-and-animals-easily-overheat-in-cars/
- https://www.consumerreports.org/car-safety/hot-car-fatalities-year-round-threat-to-children-pets-heat-stroke/
- https://rvpetsafety.com/
- https://www.digitaltrends.com/cars/thermaltag-monitors-car-temperatures-for-pets/



## Subsystem Map:
- Structural / Mechanical Lead: Huarui
  - Arduino and Sensors: 
    - What kind of a case will be able to hold the Arduino, shield, sensors and possible add-ons while allowing the sensors to receive data and ensuring that nothing overheats?
    - Would we need a case for the DHT sensor?
  - Placement: 
    - Where should the shield and sensors be placed in/on the box to maximize efficiency?
    - Where should the case be placed in the car to prevent the components from overheating while keeping the accuracy of temperature readings.
    - (Possible) Where should the fan be placed in the car and how will it be attached to the Arduino case?

- Electrical Lead: Pablo
   - What kinds of power sources could we use to power the Arduino?
   - How could we connect a solar panel to the Arduino?

- Programming Lead: Will
  - Code
  - Clock
  - Temperature/thermometer Sensor 
  - GSM Send + receive text messages
  - Libraries:
    - Temperatures(?)
    - Clock Times
    - SIM900

## BOM (Bill of Materials):
- Arduino UNO
- SainSmart Small GSM GPRS SIM900 for Arduino UNO
- ASAIR DHT11 Temperature and Humidity Sensor
- Vibration Sensor Module
- OLED Screen
