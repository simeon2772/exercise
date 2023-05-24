#include <iostream>
using namespace std;

int main()
{
    unsigned short shortVar = 5;
    unsigned long longVar = 65535;
    long sVAR = -65535;

    cout << "shortVar :\t" << shortVar;
    cout << "\t Address of shortVar:\t" << &shortVar << endl;
    cout << "longVar:\t" << longVar;
    cout<< "\t Address of longVar :\t" << &longVar << endl;
    cout << "sVAR :\t" << sVAR;
    cout<< "\t Address of sVAR :\t" << &sVAR << endl;
    return 0;
}