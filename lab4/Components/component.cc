#include "component.h"

using namespace std;

Component::Component(string name)
    : current{}
 {
    cout << "Hello" << endl;
 }

string Component::print() {
    return "hello";
}


void Component::calcCurrent(double current, double ohm)
{
    cout << current/ohm;
}




