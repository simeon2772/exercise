#include <iostream>
using namespace std;

enum BREED {YORKIE, CAIRN,DANDIE,SHETLAND,DOBERMAN,LAB};

class Mammmal
{
    protected:
    int age;
    int weight;

    public:
    //constructors
    Mammmal() {cout<<"Mammal constructor...\n";}
    ~Mammmal() {cout<<"Mammal destructor...\n";}

    //other member functions
    void speak() const {cout<<"Bark Bark\n";}
    void sleep() const {cout<<"ZZZZZZZ\n";}
};

class Dog : public Mammmal
{
    public:
    //construcotrs
    Dog() {cout<<"Dog constructor..\n";}
    ~Dog() {cout<<"Dog destructor...\n";}
    
    //other member functions
    void wagTail() const {cout<<"Tail wagging..\n";}
    void begForFood() const {cout<<"Begging for food..\n";}
    void speak() const {cout<<"WOOF WOOF\n";}

    private:
    BREED breed;
};

int main()
{
    Mammmal bigDog;
    Dog smallDog;
    bigDog.speak();
    smallDog.speak();
    return 0;  
}