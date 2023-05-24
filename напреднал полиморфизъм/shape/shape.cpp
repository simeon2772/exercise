 #include<iostream>
 using namespace std;
 
 class Shape
 {
     public:
     Shape() {}
     virtual ~Shape() {}
     virtual long getArea() {return -1;} //error
     virtual long getPerim() {return -1;}
     virtual void draw() {}
 };

 class Circle : public Shape
 {
     private:
     int radius;
     int circumference;

     public:
     Circle(int NewRadius): radius(NewRadius) {}
     ~Circle() {}
     long getArea() {return 3 * radius * radius;}
     long getPerim() {return 9 * radius;}
     void draw();
 };

 void Circle::draw()
 {
     cout<<"Circle drawing routine drawing..\n";
 }

 class Rectangle:public Shape
 {
     private:
     int width;
     int lenght;

     public:
     Rectangle(int newLen, int newWidth):lenght(newLen), width(newWidth) {}
     virtual ~Rectangle() {}
     virtual long getArea() {return lenght * width;}
     virtual long getPerim() {return 2 * lenght + 2 * width;}
     virtual int getLenght() {return lenght;}
     virtual int getWidth() {return width;}
     virtual void draw();
 };

 void Rectangle:: draw()
 {
     for(int i = 0; i <lenght; i++)
     {
         for(int j = 0; j <width; j++)
         cout<<"x";
         cout<<"\n";
     }
 }

 class Square : public Rectangle
 {
     public:
     Square(int len);
     Square(int len, int width);
     ~Square() {}
     long getPerim() {return 4 * getLenght();}
 };

 Square::Square(int newLen):Rectangle(newLen,newLen) {}

 Square::Square(int newLen, int newWidth):Rectangle(newLen, newWidth) {
     if(getLenght() != getWidth())
     cout<<"Error, not a square..\n";
 }

 int main()
 {
     int choice;
     bool fQuit = false;
     Shape * sp;

     while(1)
     {
         cout<<"(1) Circle (2) Rectangle (3) Square (0) Quit:\n";
         cin>>choice;
         switch (choice)
         {
             case 1:
             sp = new Circle(5);
             break;
             
             case 2:
             sp = new Rectangle(4, 6);
             break;

             case 3:
             sp = new Square(5);
             break;
             default:
             fQuit = true;
             break;
         }
         if (fQuit)
         break;

         sp->draw();
         cout<<"\n";
     }
     return 0;
 }