 #include <iostream>
 using namespace std;

 class Mammmal
 {
     protected:
     int age;

     public:
     Mammmal() :age(1) {cout<<"Mammal constructor...\n";}
     virtual ~Mammmal() {cout<<"Mammal destructor...\n";}
     Mammmal(const Mammmal &rhs);
     virtual void speak() const {cout<<"Mammal sound..\n";}
     virtual Mammmal* clone()  {return new Mammmal(*this);}
     int getAge() const {return age;}
 };

 Mammmal :: Mammmal(const Mammmal &rhs) :age(rhs.getAge())
 {
     cout<<"Mammal copy constructor..\n";
 }

 class Dog:public Mammmal
 {
     public:
     Dog() {cout<<"Dog constructor..\n";}
     virtual~Dog() {cout<<"Dog destructor..\n";}
     Dog(const Dog &rhs);
     void speak() const {cout<<"WOOF WOOF\n";}
     virtual Mammmal* clone()  {return new Dog(*this);}
 };

Dog::Dog(const Dog &rhs):Mammmal(rhs)
{
    cout<<"Dog copy constructor..\n";
}

class Cat: public Mammmal
{
    public:
    Cat() {cout<<"Cat constructor...\n";}
    virtual~Cat()  {cout<<"Cat destructor..\n";}
    Cat(const Cat&);
    void speak() const {cout<<"MEOW MEOW\n";}
    virtual Mammmal* Clone()  {return new Cat(*this);}
};

Cat ::Cat(const Cat &rhs):Mammmal(rhs)
{
    cout<<"Cat copy constructor..\n";
}

enum ANIMALS {MAMMAL,DOG,CAT};
const int numAnimalType = 3;

int main()
{
    Mammmal *array[numAnimalType];
    Mammmal *ptr;
    int choice, i;

    for(i = 0;i < numAnimalType; i++)
    {
        cout<<"(1) dog  (2) cat  (3) mammal : \n";
        cin>>choice;
        switch (choice)
        {
        case DOG :
          ptr = new Dog;
            break;
        case CAT : 
        ptr = new Cat;
        default :
        ptr = new Mammmal;
            break;
        }
        array[i] = ptr;
    }
    Mammmal *otherArray[numAnimalType];
    for(i = 0; i< numAnimalType; i++)
    {
        array[i]->speak();
        otherArray[i] = array[i]->clone();
    }
    for(i = 0; i<numAnimalType; i++)
    {
        otherArray[i]->speak();
    }
    return 0;
}