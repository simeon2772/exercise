#include <iostream>
using namespace std;

class Tricycle
{
public:
      
     Tricycle(int initialSpeed);
     ~Tricycle();
     int getSpeed() const { return speed; }
     void setSpeed(int speed); 
     void pedal()
     {
          setSpeed(speed + 1);
          cout<< "Pedaling\t" << getSpeed() << "mph" <<endl;
     }
     void brake()
     {
      setSpeed(speed - 1);
      cout<<"Pedaling\t"<< getSpeed() << "mph"<< endl;
     }
     private: 
     int speed;
};