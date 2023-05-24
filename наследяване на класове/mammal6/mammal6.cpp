#include <iostream>
using namespace std;

class Mammal
{
    public:
    void move() const {cout<<"Move one step\n";}
    void move(int distance) const {cout<<"BigDog moves "<<distance<<" steps\n";}
};

class Dog : public Mammal
{
public:
void move() const {cout<<"Dog moves 5 steps\n";}
};

int main()
{
    Mammal BigDog;
    Dog smallDog;
    BigDog.move();
    BigDog.move(2);
    smallDog.move();
    return 0;
}