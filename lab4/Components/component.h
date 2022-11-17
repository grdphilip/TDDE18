#ifndef Component_h
#define Component_h
#include <iostream>
#include <string>
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
    virtual double get_current() const;
    virtual void calcCurrent(double time);
    virtual void print_component();
    std::string print();
    
    
};

#endif