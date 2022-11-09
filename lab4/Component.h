#ifndef Component_h
#define Component_h
#include <iostream>

class Component {

    private:
    int current;

    public:
    Component();
    //~Component();

    void CalcCurrent(int current);

};

#endif