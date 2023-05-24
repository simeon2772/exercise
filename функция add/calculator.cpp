#include <iostream>
using namespace std;
int add (int x, int y)
{
    cout << "Running calculator"<< endl;
    return(x+y);
}

int main()
{
    cout << "What is 650 + 4095"<< endl;
    cout << "The sum is\t"<< add(650, 4095) << endl;
    cout << "What is 777 + 6059"<< endl;
    cout<< "The sum is\t"<< add(777, 6059)<< endl;
    return 0;
}