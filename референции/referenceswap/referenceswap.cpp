#include <iostream>
using namespace std;

void swap( int &x, int &y);

int main()
{
    int x = 5, y = 10;
    cout<<"Main. Before swap, x: "<<x<<" y: "<<y<<endl;

    swap(x,y);
    cout<<"Main. After swap, x: "<<x<<" y: "<<y<<endl;
    
    return 0;
}

void swap( int &rx, int &ry)
{
    int temp;
    cout<<"Main. Before swap, rx : "<<rx<<" ry: "<<ry<<endl;

    temp = rx;
    rx = ry;
    ry = temp;

    cout<<"Main. After swap, rx : "<<rx<<" ry: "<<ry<<endl;
}