#include "Component.h"
#include "vector"

int main(){
    
    std::vector<Component> net{};
    Component c;
    Battery b;
    Resistor r{"R2"};
    c.CalcCurrent(4);

    return 0;

}