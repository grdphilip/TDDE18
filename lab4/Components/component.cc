#include "component.h"

using namespace std;

Component::Component(string name, Terminal &input, Terminal &output)
    : name{name}, in{input}, out{output}
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




