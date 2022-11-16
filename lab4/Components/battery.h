#ifndef BATTERY_H
#define BATTERY_H
#include <iostream>
#include <string>
#include "component.h"

class Battery : public Component
{
public:
    Battery();

    double returnCurrent();
    double calcCurrent(double current) override;
    int get_voltage() const;
    void set_voltage(int const &value);

private:
    double voltage;
    Terminal *in;
    Terminal *out;
};

#endif