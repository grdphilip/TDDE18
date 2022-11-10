#ifndef Component_h
#define Component_h
#include <iostream>

class Component
{

protected:
    double current;

public:
    Component();
    //~Component();

    void CalcCurrent(double current);
};

class Battery : public Component
{
public:
    Battery();

    double returnCurrent() {
        return 5;
    }

private:
    double current;
};

class Resistor : public Component
{
public:
    Resistor();

    double returnCurrent() {
        return 5;
    }

private:
    double current;
};

#endif