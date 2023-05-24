#include<iostream>
using namespace std;

class Mammal
{
    protected:
    int age;
    public:
    Mammal():age(1) {cout<<"Mammal constructor\n";}
    virtual ~Mammal() {cout<<"Mammal destructor\n";}
    virtual void speak() const {cout<<"Mammal sound..\n";}
};

class Cat : public Mammal
{
    public:
    Cat() {cout<<"Cat constructor..\n";}
    ~Cat() {cout<<"Cat destrucor..\n";}
    void speak() const {cout<<"MEOWW\n";}
    void purr() const {cout<<"PRRRRRR\n";} 
};

class Dog :public Mammal
{
    public:
    Dog() {cout<<"DOg constructor..\n";}
    ~Dog() {cout<<"Dog destrucotr..\n";}
    void speak()const {cout<<"BARK BARK\n";}
};

int main()
{
    const int NumberOfMammals = 3;
    Mammal* zoo[NumberOfMammals];
    Mammal* pMammal;
    int choice, i;
    for(i = 0; i < NumberOfMammals; i++)
    {
        cout<<"(1) Dog (2) Cat :\n";
        cin>> choice;
        if(choice == 1)
        pMammal = new Dog;
        else
        pMammal = new Cat;

        zoo[i] = pMammal;
    }
    cout<<"\n";

    for(i = 0; i < NumberOfMammals; i++)
    {
        zoo[i]->speak();
        Cat *pRealCat = dynamic_cast<Cat *> (zoo[i]);

        if(pRealCat)
        pRealCat->purr();
        else 
        cout<<"uh. not a cat!\n";
        delete zoo[i];
        cout<<"\n";
    }
    return 0;
}