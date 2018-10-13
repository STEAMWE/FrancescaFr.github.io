---
# permalink: /Team_D/
 title: Team D - Water We Wasting
 layout: single
 classes: wide
---

<p align="center">
<br>
<img width="500" src ="/assets/images/water/watersetup.JPG">
<img width="500" src ="/assets/images/water/wateraction.JPG">
<br>
</p>

## Final Presentation [Download](/assets/PDF/WaterWeWastingPresentation.pdf)

## The Problem:

For those who have easy access to clean water, it is hard to understand the effects of using too much water daily. A lot of people use well over the required amount and this is bad for the environment because, it removes water from the ecosystems.

## The Solution:
An invention to address this problem would be:
A device that brings awareness to domestic water waste by tracking water usage called "Water We Wasting"


## Invention Attributes:

**Minimum Requirements**:

- Track gallons from single faucet using motion sensors or completing a circuit
- Report to user how many gallons are being used
- Knowing whether or not water is flowing from the faucet itself

**Secondary Goals**:

- How much water the household should be using vs. calculating how much they are using
- Based on the data from above it will be able to tell the user whether or not they saved water (should be > are using) or have wasted water (should be < are using)
- Being able to display number of of gallons on the LCD module
- Being equipped with a fixed hose cap (faucet cover) limiting the amount of water that comes out of the faucet
- LED lights that aid the experience of congratulating the user for using less water and ‘booing’ the user for using too much water
- Using a Big Sound to also aid the RGB light in congratulating and booing
- Celebrate saving water using the Big Sound and RGB lights or booing wasting water
- Being able to alert the user when they are nearing the cap amount of gallons for the day
- Have the user be able to input the amount of people in a household so the Arduino can multiply it by the amount of gallons one person should be using in order to calculate how much the entire house should be using
- The device will begin to beep at user if on for more than 10-20 seconds (if they are not there).
- Bluetooth devices to limit amount of cords


**Reach Goals**:

- A way the user can enter whether or not they have pets, what they are and how many
- Allow the user to enter the weather they live in because this changes the amount of water they use (hotter climates = more water)
- A solenoid to stop the water in the pipe if the user has gone over the daily amount of water so the user has to manually turn it back on in order to make the brain connection of “you used too much water” 
- The Arduino will log day data to read back after a month in order to allow the user to see whether or not the device is working in aiding them to save water
- Human sensor: if there’s no user, then the water will automatically shut off.




## History and Context:

Wasting water increases the demand for clean water. Eventually, it will leads to the usage of underground water. In order to extract the underground water, the burning of fossil fuels is envolve. Fossil fuel increases the amount of CO2 in the atmosphere which can cause the Earth temperature to rise causing glaciers in the North pole and Antarctica to melt. While glaciers hold fresh water the water would not be accessible if melted. The water melted from the glaciers would deposit directly into the ocean. Due to the size of glaciers, if they melted the ocean would rise 216 feet causing many cities to go be buried by the sea. 
If we just used the water from natural water sources droughts will continue to occur and due to the rising population they will occur more often. For example, the Colorado River is an important water source for California, Nevada, Arizona, Utah, and Colorado. Unfortunately, the Colorado river ends up dry for some people. Each state is required to take a certain amount of gallons from the river, but due to droughts amongst cities some states occasionally take more, leaving others with a dry river. In 1920 the Colorado river began to supply people with water and the demand for water has grown 55% since then. It now supplies more than 30 million people with water causing the amount of water in the Colorado river to drop 130 feet. Thus leaving many states in a drought. 


- Bare minimum of water needed: 1 gallon per person per day
[https://www.ready.gov/water]()

- Effect of uses too much water: Colorado river feeds 30 million since 1920 and has shrunk 130 feet causing droughts and killing ecosystems.
[https://www.smithsonianmag.com/science-nature/the-colorado-river-runs-dry-61427169/]()

- Demand for water has gone up 55% causing 1,900 wells to run dry
[http://www.bbc.com/future/story/20170412-is-the-world-running-out-of-fresh-water]()
- Effect of too much CO2: Glaciers melt causing ocean to go up 216 feet
[https://www.nationalgeographic.com/magazine/2013/09/rising-seas-ice-melt-new-shoreline-maps/]()
- Required water for different types of pets:
  - (About a gallon)
[https://www.cesarsway.com/dog-care/hydration/hydrate-your-hound-for-health]()
  - About half a gallon
[https://www.preventivevet.com/cats/how-much-water-cats-need-tips-for-preventing-dehydration]()
- Average amount of water used by American: 88 gallons per day
[http://www.2oceansvibe.com/2018/02/07/have-a-guess-how-much-water-the-average-american-uses-every-day/]()

- Minnesota uses 0-75 gallons per person per day 
[http://www.2oceansvibe.com/2018/02/07/have-a-guess-how-much-water-the-average-american-uses-every-day/]()
 
- There’s a big difference between saltwater and freshwater. This means, freshwater is limited. 97.5% is saltwater and 2.5% is freshwater. 

- Ice caps/glaciers 2.38% Ground water 0.397% Surface water (e.g., lakes, rivers, streams, ponds) 0.022% Atmosphere 0.001%   
[https://www.epa.gov/sites/production/files/2015-08/documents/mgwc-ww-intro.pdf]()

- A study calculates that by 2050, groundwater pumping will cause a global sea level rise of about 0.8 millimeters per year.

<br>
Wasting water increases the demand for clean water. Eventually, it will lead to the usage of underground water. In order to extract the underground water, the burning of fossil fuels is involved. Fossil fuel increases the amount of CO2 in the atmosphere which can cause the Earth temperature to rise causing glaciers in the North pole and Antarctica to melt. While glaciers hold fresh water the water would not be accessible if melted. The water melted from the glaciers would deposit directly into the ocean. Due to the size of glaciers, if they melted the ocean would rise 216 feet causing many cities to go be buried by the sea. 

- Wasting water ? More demand for clean water ? usage of underground water ? digging wells ? Fossil fuel to extract water ? Increases amount of CO2 ? Earth Temperature Rises
[http://www.slate.com/blogs/quora/2016/08/04/how_is_wasting_water_bad_for_the_environment.html]()


## Design Ideas:

<p align="center">
<img src ="/assets/images/water/sketch1.JPG">
</p>
<p align="center">
<img src ="/assets/images/water/sketch2.JPG">
</p>
<p align="center">
<img src ="/assets/images/water/sketch3.JPG">
</p>

### Mockup:
<p align="center">
<br>
<img width="600" src ="/assets/images/mockups/mockup13.jpg">
<br>
</p>

### Solving problems:
Connecting the faucet device to the faucet
  - Velcro, aerator, rubber tubing/hose clamps, rubber watch thing 

Making the faucet device slim enough to not bother user
  - Compactness of electronic components

Finding a way to hide wire in a safe way
  - Metal C bracket type thing, rubber clamps

Waterproofing both devices 
  - Hot glue and covers - wood or plastic

Where the screen goes (mounted or on counter)
  - Can come with wall mounts and an easel thing in case they want it on counter

Making sure mounts are easy to connect to device
  - Could be like hanging a picture

Keeping everything compact for easy storage/use
  - Making everything closer together and measuring distances to create a compact cover

Holes in devices for buttons/encoders/motion sensor still waterproof
  - Use plastic on inside and seal it in with hot glue

Making sure troubleshooting is easy
  - Include a manual

Allowing user to reset device in case of new members of family
  - Including a reset button

Enter button or not depending on programming choices
  - Including an enter button

Easy use/storage
  - Compacting device for this purpose

Transfer the amount of gallon from the water motion sensor to the OLED screen
  - Once circuit is complete Arduino begins to count seconds and records gallons until circuit is open in which is logs the gallons and displays the final amount for that water use

Record data
  - Using the RTC the Arduino will record data for each day and HOPEFULLY report progress overtime

How the user will finalise choice (with rotary encoder will determine number of people but 
how to choose whether or not that’s the number they want - after a certain amount of seconds or an enter button)
  - Using an enter button or making it so if on choice for 3 seconds or so it is entered
>
Allowing user to reset number of people in the house in case someone new comes (number number to be multiplied)
  - Adding a reset button for resetting the number multiplied by required amount of water (this number is what is compared to the amount of water the user used)

Recommends the amount of water according to the amount of users (~90 gallons/person)
  - Look up required amount of water per person (this is that number^^)
>
Keeping track of time 
  - RTC module


## Subsystem Map:

- Mechanical Lead: Savannah
  - Connecting the faucet device to the faucet
  - Making the faucet device slim enough to not bother user
  - Finding a way to hide wire in a safe way
  - Waterproofing both devices 
  - The faucet device needs to be super waterproof
  - Screen device waterproof to some extent but still water proofed enough for splashing
  - Where the screen goes (mounted or on counter)
  - Making sure mounts are easy to connect to device
  - Keeping everything compact for easy storage/use
  - Holes in devices for buttons/encoders/motion sensor still waterproof

- Electronics Lead: Savannah
  - Making sure troubleshooting is easy
  - Allowing user to reset device in case of new members of family
  - Enter button or not depending on programming choices
  - Keeping everything compact for an easy use/storage

- Programming Lead: Phu
  - Transfer the amount of gallon from the water motion sensor to the OLED screen
  - Record data
  - How the user will finalise choice (with rotary encoder will determine number of people but how to choose whether or not that’s the number they want - after a certain amount of seconds or an enter button)
  - Allowing user to reset number of people in the house in case someone new comes (number number to be multiplied)
  - Recommends the amount of water according to the amount of users (~90 gallons/person)
  - Keeping track of time (RTC module)


## BOM (Bill of Materials):
- Minimum:
  - RTC module
  - Wires
  - Arduino
  - 1.5 gpm hose cap
  - Wires
  - Acrylic for Enclosure
  - Power Cord
  - Labels
  - Rotary Encoder
  - Rubber Tubing
 
- Hopefully:
  - OLED screen 
  - RGB LED Light (probably 5-10)
  - Motion Sensor
  - Big Sound/Speaker/Piezo

- Prob not but:
  - Bluetooth
  - Solenoid valve

## Final Product:

<p align="center">
<br>
<img width="600" src ="/assets/images/water/watersetup.JPG">
<img width="600" src ="/assets/images/water/wateraction.JPG">
<br>
The final product tracks gallons from single faucet by completing a circuit. It takes user input of faucet GPM and number of household members and calculates average american single faucet water usage for the household. It displays the average usage along with the actual usage and a warning light turns on if the actual usage exceeds the national average.

