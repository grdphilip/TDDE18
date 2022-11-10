#include "Component.h"

using namespace std;

Component::Component(string name)
    : current{}
 {
    cout << "Hello" << endl;
 }

Battery::Battery()
        : Component{}, current{}
    {
        cout << "Battery" << endl;
    }

Resistor::Resistor(string name)
        : Component{}, current{}
    {
        cout << "Resistor" << endl;
    }

void Component::CalcCurrent(double current)
{
    cout << current << endl;
}

