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
        in.set_charge(in.charge -= get_current()*time);
        out.set_charge(out.charge += get_current()*time);  
    }
    else if(in.charge < out.charge) {
        in.set_charge(in.charge += get_current()*time);
        out.set_charge(out.charge-=get_current()*time);
    } else {

    }
    
   
} 

void Resistor::print_component() {
    cout << get_current() << " ";
    cout << out.get_charge() << endl;
}