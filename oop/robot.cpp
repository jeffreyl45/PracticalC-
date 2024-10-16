#include "robot.hpp"
Robot::Robot(string name, int version_number) :
name(name), version_number(version_number), internal_temperature(30.0)
{
    /*this->name = name;
    this-> version_number = version_number;
    internal_temperature = 30.0;*/
}

void Robot::say_hi() {
    cout << "Hello my name is " << name << endl;
}

void Robot::init_hardware() {
    cout << "Init hardware." << endl;
}

void Robot::print_info() {
    say_hi();
    cout << "version number: " << version_number << endl;
    cout << "temperature: " << internal_temperature << endl;
}

int Robot::getVersionNumber() {
    return version_number;
}

RoboticArm::RoboticArm(string name, int version_number, double reach)
    : Robot(name, version_number), reach(reach)
{

}
void RoboticArm::pick_object(double x, double y) {
    cout << "Pick object from (" << x << ", " << y << ")" << endl;
}
void RoboticArm::place_object(double x, double y) {
     cout << "Place object to (" << x << ", " << y << ")" << endl;
}