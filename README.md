# Android-control-RC-Car
We can control a rc car's movements using an android smartphone with some application which are available in the playstore.

We need some components for this project
## Component list

1. 1 car chassis it can be small or large or it can hold two motor or 4 motors.

2. 12v DC geared motors 4 nos or 2 nos acording to your project (I used 300 RPM motors you can use more RPM to increase the speed of the rc car).
3. 12v DC battery (I used lead-acid for this project). you also can use rechargable lipo batteries.

4. Motor Driver - I used L298n H bridge motor driver (If you are using 4 motors this driver is suggested) or else you can use L293d (For two motors)

5. Bluetooth Module - You can use either HC05 or HC06 bluetooth moduleboth will work for this project.

6. Arduino- You can use Arduino uno as well as arduino nano (Arduinio uno is preferred as it will reduce the wirings from the bread board).

7. Bread Board -(It's upto you. I havent use the breadboard in this project, but i used the breadboard while primery testing)

8. Cluster Wheel - Not nacessory for 4 wheel car, but if you are gonna make it a  two primery wheel car then  you need a cluster wheel.

9. Jumper Wires - You need male to male and male to female jumper wires for this project 40 in total (I got some extra to extend the wirings from the motors).

10. Wheels - You can use normal wheels. (I used drifting wheels for racing purpose. It cost 10 time more then a normal wheel) .

11. An android smart phone.

12. Arduino Bluetooth RC Car - You need this application to control 
link - https://play.google.com/store/apps/details?id=braulio.calle.bluetoothRCcontroller&hl=en


## -----------Concept behind the movement of the car-----
### Forward movement

     Whenever the rc car needs to move forward all the motors of left and right side needs to move in the forward direction
     
### Reverse Movement

    When the rc car need to move nbcakwards all the motors need to move in the reverse direction both left and right motors.
    
### Left/ right  Movement

    Now the left and the right  movement can be done by two ways
   #### No.1 
   
  For the left side movement the left side motor needs to move in the backwards direction and the right side motors needs to move in the forward direction and vice versa for the rigth  movement.
   
   #### No.2  
   
   You can program the arduino in such a way that for left movement the car must stop the left side motors and the right side motor must move in the forward direction and vice versa for the right  movement.
    

    
