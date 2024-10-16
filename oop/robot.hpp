#ifndef ROBOT_H
#define ROBOT_H
// interface

#include <iostream>
#include <string>

using namespace std;

class Robot {
public:
    // constructor
    Robot(string name, int version_number);
    void say_hi();

    void init_hardware();
    void print_info();

    int getVersionNumber();

private:
    string name;
    int version_number;
    double internal_temperature;
};

// robotic arm inherit from robot. it has all methods and attributes of robots but can take in even more exclusive ones
class RoboticArm: public Robot {
public:
    RoboticArm(string name, int version_number, double reach);

    void pick_object(double x, double y);
    void place_object(double x, double y);
private:
    double reach;
};

#endif