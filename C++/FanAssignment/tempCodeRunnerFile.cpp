#include "fan.h"
using namespace std; 

//default constructor
Fan::Fan () {
    speed = 1;
    isOn = false;
    radius = 5;
    color = "blue";
    
    id = nextId;
    ++nextId; // increment id every time object is created - av
} // end default constructor  - av

//destructor
Fan::~Fan () {
    cout << "Fan Destroyed" << endl;
}// end destructor - av

//accessors and mutators
void Fan::setFanSpeed(FanSpeed FanSpeed) {
    speed = FanSpeed;
} // end mutator setFanSpeed - av

int Fan::getFanSpeed() {
    return speed;
} // end accessor getFanSpeed - av

void Fan::setFanOn(bool fanOn){
    isOn = fanOn;
} // end mutator setFanOn - av

bool Fan::getFanOn() {
    return isOn;
} // end accessor getFanOn - av

void Fan::setFanRadius(double fanRadius) {
    radius = fanRadius;
} // end mutator setFanRadius - av

double Fan::getFanRadius(){
    return radius;
} // end accessor getFanRadius - av

void Fan::setFanColor(string fanColor) {
    color = fanColor;
} // end muator setFanColor - av

string Fan::getFanColor() {
    return color;
} // end accessor getFanColor - av

void Fan::displayFan(){
    if (isOn){
        
        cout << "Fan ID: " << id << endl;
        cout << "Fan Speed: " << speed << endl;
        cout << "Fan Color: " << color << endl;
        cout << "Fan Radius: " << radius << endl;


    } else {
        cout << "Fan ID: " << id << endl;
        cout << "Fan Color: " << color << endl;
        cout << "Fan Radius: " << radius << endl;
        cout << "Fan is off" << endl;
    } // end if else - av
} // end displayFan() - av
