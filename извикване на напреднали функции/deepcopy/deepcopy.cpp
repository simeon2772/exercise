#include <iostream>
using namespace std;

class Tricycle
{
    public:
    Tricycle();  // defaut constructor
    Tricycle(const Tricycle&);    // copy constructor
    ~Tricycle();
    int getSpeed() const {return *speed;}
    void setSpeed(int newSpeed) {*speed = newSpeed;}
    void brake();
    void pedal();
    private:
    int *speed;
};

Tricycle ::  Tricycle()
{
    speed = new int;
    *speed = 5;
}

Tricycle :: Tricycle(const Tricycle& rhs)
{
    speed = new int;
    *speed = rhs.getSpeed();
}

Tricycle :: ~Tricycle()
{
    delete speed;
    speed = NULL;
}

void Tricycle :: pedal()
{
    setSpeed(*speed + 1);
    cout<<"\nPedaling..."<<getSpeed()<<" mhp"<<endl;
}

void Tricycle :: brake()
{
    setSpeed(*speed - 1);
    cout<<"\nBraking..."<<getSpeed()<<" mhp"<<endl;
}

int main()
{
    cout<<"Creating tricycle named Phantom....";
    Tricycle phantom;
    phantom.pedal();
    cout<<"Creating second tricycle named Dallas..."<<endl;
    Tricycle dallas(phantom);
    cout<<"Phantom speed is "<<phantom.getSpeed()<<" mph"<<endl;
    cout<<"Dallas speed is "<<dallas.getSpeed()<<" mph"<<endl;
    phantom.setSpeed(10);
    cout<<"Setting Phantom speed to 10 mph"<<endl;
    cout<<"Phantom speed is "<<phantom.getSpeed()<<" mph"<<endl;
    cout<<"Dallas speed is "<<dallas.getSpeed()<<" mph"<<endl;
    return 0;
}