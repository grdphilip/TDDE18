#include "Components/battery.h"
#include "Components/resistor.h"
#include "Components/capacitor.h"
#include "Components/terminal.h"
#include "vector"
#include <iostream>


using namespace std;

// Om bug lagra olika storlekt i vector byt till pekare
// Varje component sitte ihop med två connection

int main(){
    
    std::vector<Component> vec{};

    Terminal t1{};
    Terminal t2{};
    Battery b{"B1",20,t1,t2};
    Resistor r{"R1",6,t2,t1};
  
    b.set_voltage(24);
    cout << b.get_voltage();
    vec.push_back(b);

    for ( Component i: vec) {
        cout << i.print() << endl;
    }


    return 0;

}