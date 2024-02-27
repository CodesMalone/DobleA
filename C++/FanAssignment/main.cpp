// AARON VILLALOBOS
// Input: main instantiates an object from the fan class with
//int speed, bool isOn, double radius, string color passed as 
//input for fan class
// Process: program will call accessors/mutators to set object 
// attributes accordingly, program will increment id everytime an 
// object is intantiated, giving each object its own id
// Display: main will display to user fan information invoking
//displayFan() from fan.cpp

#include <iostream>
#include "fan.cpp"
using namespace std;


int main(){
    //using object class enum fanspeed
    Fan::FanSpeed speed = Fan::FanSpeed::FAST;

    
    Fan myFan;

    myFan.setFanSpeed(speed);
    myFan.setFanOn(true);
    myFan.setFanColor("yellow");
    myFan.setFanRadius(10);
    
    Fan::FanSpeed speed2 = Fan::FanSpeed::MEDIUM;

    Fan myFan2;
    myFan.setFanSpeed(speed2);
    myFan.setFanOn(false);
    myFan.setFanColor("blue");
    myFan.setFanRadius(5);

    myFan.displayFan();
    myFan2.displayFan();

    return 0;





}