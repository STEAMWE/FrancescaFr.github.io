---
title: "E-Textile Flower"
categories:
  - Projects
tags:
  - E-Textile
  - Vinyl Cutting
  - Lasercutting
  - Projects
---

<img width="600" src="/assets/etextileflower/Flower1.jpg">
<br>

An attempt at interactive e-textile design which avoids using a microcontroller or any programmable logic element. Laser cutter, vinyl cutter, and sewing machine were used for ease, but entire project can be done by hand. 

### Concept: 

An LED Flower Brooch that changes colors, using petals as switches to change resistances for RGB channels, to generate up to 9 unique color combinations:
<br>

<img width="285" src="/assets/etextileflower/F1.jpg">
<img width="315" src="/assets/etextileflower/F2.jpg">
Initial concept + testing materials for solderability/conductivity
<br>


### Color Combinations 
(X/ohms = connected to pwr)  
 
| Color   | R  | G  | B  |
|---------|----|----|----|
| Red     |X   |    |    |
| Green   |    | X  |    |
| Blue    |    |    | X  |
| Cyan    |  |330 ohms |X  |
| Magenta |100 ohms | | X  | 
| Yellow  | 50 ohms | X  |    |
| White   | X  | X  | X  | 
| Purple  |200 ohms|     | X  |
| Orange  | 20 ohms | X  |    | 

Color combinations based off of RGB color theory. Because of the non-uniform brightness of the RGB elements, trial and error is required to obtain appropriate resistance values to balance each color combination. A combination of 6 channels with 4 different resistance values allowed for 9 unique colors to be achieved. 

### BOM
 
- RGB LED (3 positive leads, 1 shared ground)
- Coin Cell Battery + Holder 
- Conductive metal fabric snaps, silver (x6)
- Non-Conductive metal fabric snaps, black (x6)
- Adhesive-backed copper foil sheet.
- Resistors (100, 220, 330 Ohm)
- Scrap Fabric
- Thread 

### Tools 
- Soldering Iron
- Laser Cutter
- Vinyl Plotter
- Sewing Machine

### Design
Three functional layers with through-holes (to seperate the positive and negative leads) + 2 decorative layers were designed in illustrator and lasercut.
<br>

<img width="300" src="/assets/etextileflower/F3.jpg">
<img width="150" src="/assets/etextileflower/F4.jpg">
<img width="150" src="/assets/etextileflower/F5.jpg">
<br>


A circuit to supply power to the petals (flower power!) was similarly designed and cut out of a copper sheet using a vinyl cutter. This was then transfered to the back layer of the flower as shown:
<br>

<img width="150" src="/assets/etextileflower/F6.jpg">
<img width="150" src="/assets/etextileflower/F7.jpg">
<img width="150" src="/assets/etextileflower/F8.jpg">
<img width="150" src="/assets/etextileflower/F9.jpg">
<br>

### Assembly

Here are the three functional layers of the flower:
<br>

<img width="600" src="/assets/etextileflower/F91.jpg"><br>

 _Back_ : Note the conductive snaps are sewn into the middle layer, in-line with the through-holes, serving as a bridge between the first and second layer. 
 
<img width="600" src="/assets/etextileflower/F92.jpg">
<br>

_Front_ : Note the same sewing process is applied to the front of the third layer.
<br>

The Copper Circuit is then soldered to the second layer's snaps, the LED is placed between the the second and third layer, with its positive leads being soldered to the remaining snaps in the following configuration: 
<br>

<img width="300" src="/assets/etextileflower/F93.jpg">
<img width="300" src="/assets/etextileflower/F94.jpg">
The vertical pin is the ground, which will go through all the layers to the battery. Not shown is the positive lead, which runs through the 1st layer and connects to the copper circuit.
<img width="600" src="/assets/etextileflower/Flower00.jpg">
<br>

After all electrical connections are properly soldered, the layers are sewn together around their perimeter.
<br>

## Final Design:

<img width="600" src="/assets/etextileflower/Flower0.jpg">

<img width="150" src="/assets/etextileflower/Flower1.jpg">
<img width="150" src="/assets/etextileflower/Flower2.jpg">
<img width="150" src="/assets/etextileflower/Flower3.jpg">
<img width="150" src="/assets/etextileflower/Flower4.jpg">
<br>

*Note*: For durability, the resistors should be sewn into the circuit using conductive thread. The use of regular solder method was pure lazyness.

### Conclusion:

E-textiles is very time consuming for such a limited payoff - maybe worth it for specific applications, but generally restrictive way to build circuits. 


[Download Ai/PDF Assets](/assets/etextileflower/etextileflower.zip) 



