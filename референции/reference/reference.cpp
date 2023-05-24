#include <iostream>
using namespace std;
int main()
{
    int intOne;
    int &rSomeRef = intOne;

    intOne = 5;
    cout<<"intOne : "<< intOne <<endl;
    cout<< "rSomeRed : "<< rSomeRef << endl;

    rSomeRef = 7;
    cout<< "rSomeRef : "<<rSomeRef<<endl;
    cout<<"intOne : "<<intOne << endl;

    return 0;
}