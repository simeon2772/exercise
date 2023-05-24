#include <iostream>
using namespace std;
 int main()
 {
     int intone;
     int &rSomeRef = intone;

     intone = 5;

     cout<< "intone : "<< intone <<endl;
     cout<<"rSomeRef : "<< rSomeRef <<endl;

     cout<< "intone : "<< &intone<<endl;
     cout<< "rSomeRef : "<< &rSomeRef<<endl;
    
    return 0;
 }