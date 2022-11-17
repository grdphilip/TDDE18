#include "Components/battery.h"
#include "Components/resistor.h"
#include "Components/capacitor.h"
#include "Components/terminal.h"
#include "simulator.h"
#include "vector"
#include <iostream>


using namespace std;

// Om bug lagra olika storlekt i vector byt till pekare
// Varje component sitte ihop med två connection

int main(){
    
    std::vector<Component*> vec{};

    Terminal p{};
    Terminal r124{};
    Terminal n{};

    Battery b{"B1",24,n,p};
    Resistor r1{"R1",6,p,r124};
    Resistor r2{"R2",6,r124,n};
    vec.push_back(&b);
    vec.push_back(&r1);
    vec.push_back(&r2);


    Simulator s{vec,200000,10,0.01};
    s.simulate();

    return 0;

}