#ifndef RESISTOR_H
#define RESISTOR_H
#include <iostream>
#include <string>
#include "component.h"

class Resistor : public Component
{
public:
    Resistor(std::string name, double ohm);

    double returnCurrent();
    double calcCurrent(double current, double ohm) override;

private:
    double current;
};

#endif