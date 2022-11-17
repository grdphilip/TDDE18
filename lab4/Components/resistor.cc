#include "resistor.h"

using namespace std;

Resistor::Resistor(string name, double ohm, Terminal &input, Terminal &output)
        : Component{name, input, output}, current{ohm}
    {

    }


double Resistor::get_current() const{

    return (abs(in.charge-out.charge)/current);
}




void Resistor::calcCurrent(double const &time) {

    if(in.charge > out.charge) {
        in.charge -= get_current()*time;
        out.charge += get_current()*time;   
    }
    else if(in.charge < out.charge) {
        in.charge += get_current()*time;
        out.charge-=get_current()*time;
    } else {
        return;
    }
    
   
} 