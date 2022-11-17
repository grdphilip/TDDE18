#ifndef TERMINAL_H
#define TERMINAL_H
#include <iostream>
#include <string>

class Terminal
{
public:
    Terminal(); 
    //~Terminal();
    double charge;
    void set_charge(double const &value);
    double get_charge();
};

#endif