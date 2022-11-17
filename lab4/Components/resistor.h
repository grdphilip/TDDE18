#ifndef RESISTOR_H
#define RESISTOR_H
#include <iostream>
#include <string>
#include "component.h"

class Resistor : public Component
{
public:
    Resistor(std::string name, double ohm, Terminal &input, Terminal &output);

    double returnCurrent();
    void calcCurrent(double const &time);
    double get_current() const;

private:
    double current;
};

#endif