#include "simulator.h"

using namespace std;

Simulator::Simulator(std::vector<Component *> vec, int iterations, int lines, double time)
    : components{vec}, iterations{iterations}, lines{lines}, time{time}
{
}

void Simulator::simulate()
{
    for (int j = 0; j <= iterations; j++)
    {
        for (Component *i : components)
        {
            
          i->calcCurrent(time);
            if (j % (iterations / lines) == 0)
            {
              i->print_component();
            }
        }
    }
}