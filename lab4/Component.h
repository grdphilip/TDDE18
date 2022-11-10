#ifndef Component_h
#define Component_h
#include <iostream>
#include <string>


class Component
{

protected:
    double current;

public:
    Component(std::string name);
    Component() = default;
    //~Component();

    void CalcCurrent(double current);
};

class Battery : public Component
{
public:
    Battery();

    double returnCurrent();
    double calcCurrent(double current);

private:
    double current;
};

class Resistor : public Component
{
public:
    Resistor(std::string name);

    double returnCurrent();
    double calcCurrent(double current);

private:
    double current;
};

#endif