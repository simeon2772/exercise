 #include <iostream>
 using namespace std;

 enum BREED{YORKIE,CAIRN,DANDIE,SHETLAND,DOBERMAN,LAB};

 class Mammal
 {  
     protected:
     int age;
     int weight;
     
     public:
     //constructor
     Mammal(): age(2), weight(5)  {}
     ~Mammal() {}
    
    //accessors
    int getAge() const {return age;}
    void setAge (int newAge) {age = newAge;}
    int getWeight() const {return weight;}
    void setWeight(int newWeight) {weight = newWeight;}

    //other member funtions
    void speak () const {cout<<"Mammal sound!\n";}
    void sleep () const {cout<<"Shh.I'm sleeping!\n";}
 };

class Dog : public Mammal
{
    private:
    BREED breed;

    public:
    //constructors
    Dog():breed(YORKIE) {}
    ~Dog(){}

    //accessors
    BREED getBreed() const {return breed;}
    void setBreed(BREED newBreed)  {breed = newBreed;}

    //other meember functions
    void wagTail() const {cout<<"tail wagging...\n";}
    void begForFood() const {cout<<"Begging for food...\n";}
};

int main()
{
    Dog maksi;
    maksi.speak();
    maksi.wagTail();
    cout<<"Maksi is "<<maksi.getAge()<<" years old."<<endl;
    maksi.wagTail();
    maksi.begForFood(); 
    cout<<"maksi weight is : "<<maksi.getWeight()<<" kg"<<endl;
    return 0;
}