#include "resistor.h"

using namespace std;

Resistor::Resistor(string name, double ohm, Terminal &input, Terminal &output)
        : Component{name, input, output}, current{ohm}
    {
        cout << "Resistor" << endl;
    }

double Resistor::calcCurrent(double current, double ohm) {
    current = current/ohm;
    cout << current << endl;
    return current;
}