#ifndef SIMULATOR_H
#define SIMULATOR_H
#include <iostream>
#include <string>
#include <vector>
#include "Components/component.h"


class Simulator
{


public:
    Simulator(std::vector<Component*> vec, int iterations, int lines, double const time);
    void simulate();
    //~simulator();
    void print_values(std::vector<Component*> vec);
    void print_info(std::vector<Component*> vec);
    void empty_vec();

private:
    std::vector<Component*> components;
    int lines;
    int iterations;
    double time;

};

#endif

