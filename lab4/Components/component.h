#ifndef Component_h
#define Component_h
#include <iostream>
#include <string>

class Component
{

protected:
    double current;

public:
    Component(std::string name);
    Component() = default;
    //~Component();

    virtual double calcCurrent(double current, double ohm);
    std::string print();
};

#endif