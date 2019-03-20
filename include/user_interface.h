#include <iostream>
#include <chrono>
#include <vector>
#include <ncurses.h>

#include "driver.h"
#include "car.h"
#include "cruisecontrol.h"

namespace driving_example {

    using namespace std::chrono;
    using namespace elma;
    using namespace driving_example;

    
    class UserInterface : public Process {

        public:

        //! Wrap the base UserInterface process class
        UserInterface(Car& carv);

        void init() {}
        void start() {}

        //! Update the user interface by (a) reading keyboard input and (b) writing to the screen
        void update();
        void stop() {}

        private:
        Car& _car;
        int gas;
        int car_state;
        int gear_state;
        double desire_speed;
        int speed_limit[5] = {20,100,80,60,120};
        int speed_lim = 80;

    };

}