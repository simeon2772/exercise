#include <iostream>
using namespace std;
int main()
{
    int value1 = 12500;
    int value2 = 1700;
    int *pPointer = nullptr;

    pPointer = &value2;

    value1 = *pPointer;
    pPointer = 0;
    cout<< "value1 = " << value1 <<endl;
    return 0;
}