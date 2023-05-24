#include <iostream> 
using namespace std;

enum BREED {YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal
{
    protected:
    int age;
    int weight;

    public:
    //constructors
    Mammal();
    Mammal(int age);
    ~Mammal();

    //accessors
    int getAge() const {return age;}
    void setAge(int newAge) {age = newAge;}
    int getWeight() const {return weight;}
    void setWeight(int newWeight) {weight = newWeight;}
    
    //other member funtions
    void speak() const {cout<<"BARK BARK\n";}
    void sleep() const {cout<<"ZZZZZZZ\n";}
};

class Dog : public Mammal
{
    private:
    BREED breed;

    public:
    //constructors
    Dog();
    Dog(int age);
    Dog(int age, int weight);
    Dog(int age, BREED breed);
    Dog(int age, int weight, BREED breed);
    ~Dog();

    //accessors
    BREED getBreed() const {return breed;}
    void setBreed(BREED newBreed) {breed = newBreed;}

    //other member funtions
    void wagTail() const {cout<<"Tail wagging..\n";}
    void begForFood() const {cout<<"Begging for food...\n";}
};

Mammal ::Mammal():
age(1),
weight(5)
{
    cout<<"Mammal constructor\n";
}

Mammal ::Mammal(int age):
age(age),
weight(5)
{
    cout<<"Mammal(int) constructor...\n";
}

Mammal ::~Mammal()
{
    cout<<"Mammal destructor..\n";
}

Dog::Dog():
Mammal(),
breed(YORKIE)
{
    cout<<"Dog constructor..\n";
}

Dog::Dog(int age):
Mammal(age),
breed(YORKIE)
{
    cout<<"Dog(int) constructor..\n";
}

Dog::Dog(int age, int newWeight):
Mammal(age),
breed(YORKIE)
{
    weight = newWeight;
    cout<<"Dog(int,int) constructor..\n";
}

Dog::Dog(int age,int newWeight,BREED breed):
Mammal(age),
breed(breed)
{
    weight = newWeight;
    cout<<"Dog(int,int,BREED) constructor...";
}

Dog::Dog(int age, BREED newBreed):
Mammal(age),
breed(newBreed)
{
    cout<<"Dog(int, BREED) constructor..\n";
}

Dog::~Dog()
{
    cout<<"Dog destructor..\n";
}

int main()
{
    Dog maksi;
    Dog rover(5);
    Dog buster(6,8);
    Dog yorkie (3, YORKIE);
    Dog dobbie (4, 20,DOBERMAN);
    maksi.speak();
    rover.wagTail();
    cout<<"Yorkie is "<<yorkie.getAge()<<" years old\n";
    cout<<"Dobbie weight is : "<<dobbie.getWeight()<<" KG\n";
    return 0;
}