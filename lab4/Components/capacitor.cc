#include "capacitor.h"
#include <string>

using namespace std;

Capacitor::Capacitor(string name, double ohm, Terminal &input, Terminal &output)
        : Component{name, input, output}, current{ohm}
    {

    }
Capacitor::~Capacitor() {
    
}

    double Capacitor::get_current() const{
        return (abs(in.charge-out.charge)-stored_volt);
    }

    void Capacitor::calcCurrent(double const &time) {
    
    charge_difference = (0.8 * get_current()) * time;
    if(in.charge > out.charge) {
        in.charge -= charge_difference;
        out.charge += charge_difference;
        
    }
    else {
        in.charge += charge_difference;
        out.charge -= charge_difference;
    } 
        stored_volt += charge_difference;
   
    }