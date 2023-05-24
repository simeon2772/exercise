#include <iostream>
using namespace std;
int main()
{
    int localVariable = 5;
    int *pLocal = &localVariable;
    int *pHeap = new int;
    if(pHeap == nullptr)
    { 
       cout<<"Error! No memory for pHeap !!";
       return 1;
    }
    *pHeap = 7;
    cout << "localVariable : " << localVariable <<endl;
    cout << "pLocal : " << *pLocal << endl;
    cout << "pHeap : " << *pHeap << endl;
    delete pHeap;
    pHeap = new int;
    if (pHeap == nullptr)
    {
        cout<< "Error! No memory for pHeap!!";
        return 1;
    }
    *pHeap = 9;
    cout << "pHeap : " <<*pHeap << endl;
    delete pHeap;
    return 0; 
}