#include <iostream>
using namespace std;

class Mammal
{
    public:
    Mammal():age(1) {cout<<"Mammal constructor...\n";}
    virtual ~Mammal() {cout<<"Mammal destructor...\n";}
    virtual void speak() const {cout<<"Mammal soeak!\n";}

    protected:
    int age;
};

class Cat : public Mammal
{
    public:
    Cat() {cout<<"Cat constructor...\n";}
    ~Cat() {cout<<"Cat destructor..\n";}
    void speak() const {cout<<"Cat sound!";}
};

int main()
{
    Mammal *pCat = new Cat;
    pCat->speak();
    return 0;
}