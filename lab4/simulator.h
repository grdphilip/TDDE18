#ifndef SIMULATOR_H
#define SIMULATOR_H
#include <iostream>
#include <string>
#include <vector>
#include "Components/component.h"


class Simulator
{


public:
    Simulator(std::vector<Component*> vec, int iterations, int lines, double time);
    void simulate();
    //~simulator();

private:
    std::vector<Component*> components;
    int lines;
    int iterations;
    double time;

};

#endif

