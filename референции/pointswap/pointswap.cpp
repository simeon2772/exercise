#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main()
{
    int x = 5, y= 10;
    cout<<"Main. Before swap, x: "<< x << " y: "<<y<<endl;

    swap(&x, &y);
    cout<<"Main. After swap, x: "<<x<<" y: "<<y<<endl;
    
    return 0;
}

void swap(int *px, int *py)
{
    int temp;
    cout <<"Main. Before swap, *px: "<<*px<<" *py: "<<*py<<endl;

    temp = *px;
    *px = *py;
    *py = temp;

    cout<<"Main. After swap, *p x: "<<*px<<" *py: "<<*py<<endl; 
}
