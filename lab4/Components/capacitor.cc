#include "capacitor.h"
#include <string>

using namespace std;

    Capacitor::Capacitor(string name)
        : Component{}, current{}
    {
        cout << "Capacitor" << endl;
    }

    double Capacitor::calcCurrent(double current, double ohm) {
        return 1.4;
    }