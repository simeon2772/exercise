#include <iostream>
using namespace std;

enum ERR_CODE{SUCCES, ERROR};

ERR_CODE factor(int, int&, int&);

int main()
{
    int number, squared, cubed;
    ERR_CODE result;

    cout<<"Enter a number : ";
    cin>>number;

    result = factor(number, squared,cubed);

    if(result == SUCCES)
    {
        cout<<"Number : "<<number<<endl;
        cout<<"Squared : "<<squared<<endl;
        cout<<"Cubed : "<<cubed<<endl;
    }
    else 
    {
        cout<< "Error encountered!!";
    }
    return 0;
}

ERR_CODE factor( int n, int &rSquared, int &rCubed)
{
    if( n > 20)
    {
        return ERROR;
    }
    else
    {
        rSquared= n*n;
        rCubed = n*n*n;
        return SUCCES;
    }
}
