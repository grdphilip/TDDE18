#ifndef CAPACITOR_H
#define CAPACITOR_H
#include <iostream>
#include <string>
#include "component.h"

class Capacitor : public Component
{
public:
    Capacitor(std::string name);
    double returnCurrent();
    double calcCurrent(double current, double ohm) override;

private:
    double current;
   
};


#endif