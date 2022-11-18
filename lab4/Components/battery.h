#ifndef BATTERY_H
#define BATTERY_H
#include <iostream>
#include <string>
#include "component.h"

class Battery : public Component
{
public:
    Battery(std::string name, double const volt, Terminal &input, Terminal &output);
    ~Battery();
    double get_current() const;
    void calcCurrent(double const &time) override;

private:
    double voltage;
    
};

#endif