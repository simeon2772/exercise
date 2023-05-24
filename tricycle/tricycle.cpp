#include "tricycle.hpp"

Tricycle :: Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

Tricycle :: ~Tricycle ()
{
    //do nothing
}

void Tricycle :: setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
    speed = newSpeed;
}

int main()
{
    Tricycle wichita(5);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();
    
    return 0;
}