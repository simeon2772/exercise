#include <iostream>
using namespace std;

class SimpleCat
{
    public:
    SimpleCat();  //constructor
    SimpleCat(SimpleCat&);    //copy constructor
    ~SimpleCat();    //destructor
};

SimpleCat :: SimpleCat()
{
    cout<<"Simple Cat constructor ..."<<endl;
}

SimpleCat :: SimpleCat(SimpleCat&)
{
    cout<<"Simple Cat copy constructor...."<<endl;
}

SimpleCat :: ~SimpleCat()
{
    cout<<"Simple Cat destructor..."<<endl;
}

SimpleCat functionOne (SimpleCat theCat);
SimpleCat* functionTwo(SimpleCat *theCat);

int main()
{
    cout<<"Making a cat..."<<endl;
    SimpleCat Frisky;
    cout<<"Calling funtionOne ...."<<endl;
    functionOne(Frisky);
    cout<<"Calling funtionTwo..."<<endl;
    functionTwo(&Frisky);
    return 0;
}

//functionOne, passed by value
SimpleCat functionOne(SimpleCat theCat)
{
    cout<<"FunctionOne returning....."<<endl;
    return theCat;
}

//functionTwo, passed by reference
SimpleCat* functionTwo(SimpleCat *theCat)
{
    cout<<"FunctionTwo returning...."<<endl;
    return theCat;
}