#ifndef BATTERY_H
#define BATTERY_H
#include <iostream>
#include <string>
#include "component.h"

class Battery : public Component
{
public:
    Battery(std::string name, double volt, Terminal &input, Terminal &output);

    int get_voltage() const;
    void set_voltage(int const &value);
    double get_current() const;
    void print_component() override;
    void calcCurrent(double const &time) override;

private:
    double voltage;
    
};

#endif