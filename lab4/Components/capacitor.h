#ifndef CAPACITOR_H
#define CAPACITOR_H
#include <iostream>
#include <string>
#include "component.h"

class Capacitor : public Component
{
public:
Capacitor(std::string name, double ohm, Terminal &input, Terminal &output);
~Capacitor();
    void calcCurrent(double const &time) override;
    double get_current() const;
    
private:
    double current;
    double stored_volt;
    double charge_difference;
};


#endif