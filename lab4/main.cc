#include "Components/battery.h"
#include "Components/resistor.h"
#include "Components/capacitor.h"
#include "vector"
#include <iostream>

using namespace std;

// Om bug lagra olika storlekt i vector byt till pekare
// Varje component sitte ihop med två connection

int main(){
    
    std::vector<Component> vec{};
    

    Resistor r{"R2",20};
    Component c;
    Battery b;
    b.set_voltage(24);
    cout << b.get_voltage();
    vec.push_back(r);
    vec.push_back(b);

    for ( Component i: vec) {
        cout << i.print() << endl;
    }

    Capacitor cap{"C2"};
    r.calcCurrent(4,2);

    return 0;

}