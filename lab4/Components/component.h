#ifndef Component_h
#define Component_h
#include <iostream>
#include <string>
#include "terminal.h"

class Component
{

protected:
    std::string name;
    double current;
    Terminal &in;
    Terminal &out;

public:
    Component(std::string name, Terminal &p, Terminal &n);
    
    //~Component();

    virtual double calcCurrent(double current, double ohm);
    std::string print();
};

#endif