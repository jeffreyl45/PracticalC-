#include <iostream>
#include <string>
using namespace std;
#include "robot.hpp"

int main() {
    Robot robot1("R2D2", 3);
    Robot robot2("C3PO", 2);
    robot1.say_hi();
    robot1.init_hardware();
    robot1.print_info();
    RoboticArm arm ("Bob", 4, 300);
    arm.print_info();
    arm.pick_object(1,2);
    arm.place_object(3,4);

    cout << robot1.getVersionNumber() << endl;
    return 0;
}