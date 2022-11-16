#include "resistor.h"

using namespace std;

Resistor::Resistor(string name, double ohm)
        : Component{}, current{}
    {
        cout << "Resistor" << endl;
    }

double Resistor::calcCurrent(double current, double ohm) {
    current = current/ohm;
    cout << current << endl;
    return current;
}