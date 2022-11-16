#ifndef CAPACITOR_H
#define CAPACITOR_H
#include <iostream>
#include <string>
#include "component.h"

class Capacitor : public Component
{
public:
    Capacitor(std::string name);
    double calcCurrent(double current, double ohm);

private:
    double current;
   
};


#endif