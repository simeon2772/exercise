#include <iostream>
using namespace std;

enum BREED{DOG1,DOG2,DOG3,DOG4,DOG5,DOG6};

class Mammal
{
    protected:
    int age;
    int weight;

    public:
    //constructors
    Mammal();
    ~Mammal();

    //accessors
    int getAge() const {return age;}
    void setAge(int newAge) {age = newAge;}
    int getWeight() const {return weight;}
    void setWeight(int newWeight) {weight = newWeight;}

    //other member funtions
    void speak() const {cout<<"BARK... BARK..!!\n";}
    void sleep() const {cout<<"ZZZZZZZ\n";}
};

class Dog : public Mammal
{
    private:
    BREED breed;

    public:
    //constructors
    Dog();
    ~Dog();

    //accessors
    BREED getBreed () const {return breed;}
    void setBreed(BREED newBreed)  {breed = newBreed;}

    //other member funtions
    void wagTail() const {cout<<"Tail wagging...\n";}
    void begForFood () const {cout<<"Begging for food...\n";}
};

Mammal ::Mammal():
age(3),
weight(5)
{
    cout<<"Mammal constructor\n";
}

Mammal ::~Mammal()
{
    cout<<"Mammal destructor\n";
}

Dog ::Dog():
breed(DOG1)
{
    cout<<"dog constructor\n";
}

Dog::~Dog()
{
    cout<<"Dog destructor\n";
}

int main()
{
    Dog maksi;  // creating a dog
    maksi.sleep();
    maksi.speak();
    maksi.wagTail();
    maksi.begForFood();
    cout<<"Maksi is "<<maksi.getAge()<<" years old"<<endl;
    return 0;
}


