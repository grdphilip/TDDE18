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
    
    std::vector<Component> vec{};

    Terminal t1{};
    Terminal t2{};
    Terminal t3{};

    Battery b{"B1",20,t1,t2};
    Resistor r1{"R1",6,t2,t3};
    Resistor r2{"R2",6,t3,t1};
  
    cout << b.get_voltage();
    vec.push_back(b);
    vec.push_back(r1);
    vec.push_back(r2);


    Simulator s{vec,10,10,10};
    s.simulate();

    return 0;

}