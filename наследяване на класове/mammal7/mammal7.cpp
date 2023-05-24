#include <iostream>
using namespace std;

class Mammal
{
    public:
    void move()const {cout<<"Dog moves one step\n";}
    void move(int distance) const {cout<<"Dog moves "<<distance<<" steps\n";}
};

class Dog : public Mammal
{
    void move() const;
};

void Dog ::move() const
{
    cout<<"Dog moves...\n";
    Mammal::move(3);
}

int main()
{
    Mammal bigDog;
    Dog smallDog;
    bigDog.move(2);
    smallDog.Mammal::move(6);
    return 0;
} 
