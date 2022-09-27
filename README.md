# RetroSwitch
# A custom open source retro game console in the body of a 3D printed nintendo switch case

---------------------------
This project is powered by:
---------------------------

- raspberry pi - doesnt matter which model you use as long as it supports retropie adn the 7 inch raspberry pi official display
- 2 Arduino pro micros
- Official raspberry pi 7 inch display
- Batteries that i still havent chosen yet
- buttons of any choice
- joystick modules
- wires
- some other stuff shown later

----------------------------
How to build one yourself!!!
----------------------------

So as you can see on the picture this is my current progress! What you have to do is very simple. Follow the wiring diagram, and make 2 arduinos wiried this way NB! On the left side you have to add an aditional button - wired like the others except this time the signal goes to pin 10 on the ardiuno on the left!!! VERY IMPORTANT!!!

![current_progress_retro_switch](https://user-images.githubusercontent.com/91755243/192613026-70407229-128c-42d5-b510-f238baf57339.jpg)

On this picture you can see the Left side completely done. You don't have to do it the same way as me. You can chose your microcontroller as long as you know how to wire it up and program it, you can use your own buttons and joysticks as long as they work!!!

Working on the right part!!! Soon Update!!!

-------------
Good to know: 
-------------

Full diagram pro micro.png is a compilation of the other 2 files. The other files show the diagrams separately to make you life easier. On the schematic is shown an arduino Leonardo which has the same pinout as the pro micro. Thus you can do this with pro micros! (I did it with pro micros). You will need 2 pro micros for this project - one on the left side, one on the right side. The reason I chose to simulate keyboard presses with the Arduino Pro Micro is because you can replace the raspberry pi with another single board computer lithe the Latte Panda, Orange Pi or others.

----------
Caution!!!
----------

Do not try to overclock or boost performace in any way except if you know what you are doing!!! Overclocking may cause overheating with unproper cooling (This 3D model  doesn't have the best airflow!)

