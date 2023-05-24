#include<iostream>
#include<cmath>
using namespace std;
#include "trational.h"

int main()
{
    double SetConsoleOutputCP(1251);
    TRational ARational(10,15);
    cout<<"Before: ";
    ARational.print();
    ARational.Reduce();
    cout<<"After: ";
    ARational.print();
    return 0;
}