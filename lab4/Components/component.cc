#include "component.h"

using namespace std;

Component::Component(string name, Terminal &input, Terminal &output)
    : name{name}, in{input}, out{output}
 {
 }

string Component::print() {
    return name;
}


double Component::calcCurrent(double current, double ohm)
{
    return current/ohm;
}




