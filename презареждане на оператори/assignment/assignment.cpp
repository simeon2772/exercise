#include <iostream>
using namespace std;

class Tricycle
{
    public:
    Tricycle();
    // copy constructor and destructor use default
    int getSpeed() const {return *speed;}
    void setSpeed(int newSpeed) {*speed = newSpeed;}
    Tricycle operator=(const Tricycle&); 
    private:
    int *speed;
};

Tricycle :: Tricycle()
{
    speed = new int;
    *speed = 5;
}

Tricycle Tricycle :: operator=(const Tricycle& rhs)
{
    if(this == &rhs)
    return *this;
    delete speed;
    speed = new int;
    *speed = rhs.getSpeed();
    return*this;
}

int main()
{
    Tricycle phantom;
    cout<<"Phantom's speed is : "<<phantom.getSpeed()<<" mph"<<endl;
    cout<<"Setting phantoms'speed to 6 mph"<<endl;
    phantom.setSpeed(6);
    Tricycle dallas;
    cout<<"Dallas'speed is : "<<dallas.getSpeed()<<" mph"<<endl;
    cout<<"Coping phantom to dallas"<<endl;
    phantom = dallas;
    cout<<"Phantom'speed is : "<<dallas.getSpeed()<<" mph"<<endl;
    return 0;
}