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

    void calcCurrent(double current, double ohm);
    std::string print();
};

class Battery : public Component
{
public:
    Battery();

    double returnCurrent();
    double calcCurrent(double current);

private:
    double current;
    int integer;
        
};

class Resistor : public Component
{
public:
    Resistor(std::string name);

    double returnCurrent();
    double calcCurrent(double current, double ohm);

private:
    double current;
};

class Capacitor : public Component
{
public:
    Capacitor(std::string name);

    double returnCurrent();
    double calcCurrent(double current, double ohm);

private:
    double current;
};

#endif