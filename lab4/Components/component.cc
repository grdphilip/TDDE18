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


double Component::calcCurrent(double current, double ohm)
{
    return current/ohm;
}




