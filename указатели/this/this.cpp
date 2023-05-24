#include <iostream>
using namespace std;

class Rectangle
{
    public:
    Rectangle();
    ~Rectangle();
    void setLenght (int lenght) {this->itsLenght = lenght;}
    int getLenght() const {return this -> itsLenght;}
    void setWidth (int width) {itsWidth = width;}
    int getWidth() const {return this-> itsWidth;}
    private:
    int itsLenght;
    int itsWidth;
};

Rectangle :: Rectangle()
{
    itsLenght = 10;
    itsWidth = 5;
}
 Rectangle :: ~Rectangle ()
 {}

 int main ()
 {
     Rectangle theRect;
     cout << "theRect is " <<theRect.getLenght()<<" feet long."<< endl;
     cout << "theRect is " <<theRect.getWidth()<< " feet wide."<<endl;

     theRect.setLenght(20);
     theRect.setWidth(10);
     cout <<"theRect is "<<theRect.getLenght()<<" feet long"<<endl;
     cout<<"theRect is "<<theRect.getWidth()<<" feet long"<<endl;

     return 0; 
 }