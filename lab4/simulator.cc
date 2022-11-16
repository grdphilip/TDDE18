#include "simulator.h"


using namespace std;

Simulator::Simulator(std::vector<Component> vec, int lines, double steps, double volt)
    : components{vec}, lines{lines}, steps{steps}, volt{volt}
 {
    
 }

void Simulator::simulate() {
    
    for ( Component i: components) {
        cout << i.print() << endl;
    }
    
}