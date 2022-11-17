#include "simulator.h"


using namespace std;

Simulator::Simulator(std::vector<Component*> vec, int iterations, int lines, double time)
    : components{vec}, iterations{iterations}, lines{lines}, time{time}
 {
    
 }

void Simulator::simulate() {
    
    for ( Component* i: components) {
        cout << i->print() << endl;
    }
    
}