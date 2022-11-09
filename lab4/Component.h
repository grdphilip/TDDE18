#ifndef Component_h
#define Component_h
#include <iostream>

class Component {

    protected:
    int current;

    public:
    Component();
    //~Component();

    void CalcCurrent(int current);

}; 

class Battery : public Component
{
    public:
        Battery();
    

}

#endif