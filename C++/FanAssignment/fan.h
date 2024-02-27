#include <iostream>
#include <string>

using namespace std;


//declare fan class - av
class Fan {
    // private members
    private: 
        // constants for speed of fan - av
        //enum FanSpeed {SLOW = 1, MEDIUM = 2, FAST = 3};
        // variable to specify speed  - av
        int speed;
        // boolean to specify if fan - av
        bool isOn;
        // num to specify radius- av
        double radius;
        // string to specify  color of fan - av
        string color;

        // variable for inital id - av
        int id = 0;
        
        // public members - av
        public:
        
        // default constructor to inilizae a default fan -av 
        Fan();
        //deconstructor - av
        ~Fan();

        enum FanSpeed {SLOW = 1, MEDIUM = 2, FAST = 3};

        // settor/mutators - av
        void setFanSpeed(FanSpeed FanSpeed);
        int getFanSpeed();
        void setFanOn (bool FanOn);
        bool getFanOn();
        void setFanRadius(double fanRadius);
        double getFanRadius();
        void setFanColor(string fanColor);
        string getFanColor();

        // static id field variable - av
        static int nextId;

        // method to display fan info - av
        void displayFan();









}; // end Fan class - AV