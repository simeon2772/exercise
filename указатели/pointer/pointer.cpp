#include <iostream>
using namespace std;
int main()
{

    int myAge ;
    int *pAge = nullptr;

    myAge = 5;
    pAge = &myAge;
    
    cout << "myAge : " << myAge << endl;
    cout << "*pAge : " << *pAge << endl;

    cout<< "*pAge = 7"<< endl;
    *pAge = 7;
    cout <<" myAge : " << myAge << endl;
    cout << "*pAge : " << *pAge << endl;

    cout <<" myAge = 9 "<< endl;
    myAge = 9;
    cout<< "*pAge : " << *pAge << endl;
    cout << "myAge : " << myAge << endl;

    return 0;

}