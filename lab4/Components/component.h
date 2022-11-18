#ifndef Component_h
#define Component_h
#include <iostream>
#include <string>
#include <iomanip>
#include "terminal.h"

class Component
{

protected:
    std::string name;
    double current;
    Terminal &in;
    Terminal &out;

public:
    Component(std::string name, Terminal &in, Terminal &out);
    
    ~Component();
    double get_charge() const;
    virtual double get_current() const = 0;
    virtual void calcCurrent(double const &time) = 0;
    std::string get_name() const;


    
    
};

#endif