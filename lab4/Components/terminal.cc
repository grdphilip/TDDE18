#include "terminal.h"

using namespace std;

Terminal::Terminal()
    : charge{0} 
{
}

void Terminal::set_charge(double const &value) {
    charge = value;
}


double Terminal::get_charge() {
    return charge;
}