#include <iostream>
using namespace std;

class Mammal
{
    protected:
    int age;

    public:
    Mammal():age(1){};
    ~Mammal(){};
    virtual void speak() const {cout<<"Mammal sound...\n";}
};

class Dog:public Mammal
{
    public:
    void speak() const {cout<<"WOOF WOOF \n";}
};

class Cat:public Mammal
{
    void speak() const {cout<<"MEOW MEOW\n";}
};

class Horse:public Mammal
{
    void speak() const {cout<<"WHINNYYYY!\n";}
};

class Pig:public Mammal
{
    void speak() const {cout<<"OINK OING\n";}
};

int main()
{
    Mammal* array[4];
    Mammal* ptr;
    int choice, i;
    for(i=0; i <4; i++)
    {
        cout<<"(1)dog, (2)cat, (3)horse, (4)pig:\n ";
        cin>>choice;
        switch (choice)
        {
        case 1:
        ptr = new Dog;
        break;
        case 2:
        ptr = new Cat;
        break;
        case 3:
        ptr = new Horse;
        break;
        case 4:
        ptr = new Pig;
        break;
        }
        array[i] = ptr;
    }
    for (i = 0; i < 4; i++)
    {
        array[i]->speak();
    }
    return 0;
}