#include <iostream>
using namespace std;

enum BREED{YORKIE, CAIRN,DANDIE,SHETLAND,DOBERMAN,LAB};
class Mammal
{
    public:
    //constructor
    Mammal();
    ~Mammal();
    //accessors
    int getAge() const;
    void setAge(int);
    int getWeight();
    void setWeight();
    //other membre functions
    void sleep();
    void speak();
    protected:
    int age;
    int weight;
};

class Dog :public Mammal
{
    public:
    //constructor
    Dog();
    ~Dog();
    //accessors
    BREED getBreed() const;
    void setBreed(BREED);
    //other member funtions
    void wagtail();
    void begForFood();
    protected:
    BREED itsBreed;
};

int main()
{
    return 0;
}