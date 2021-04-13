#include <iostream>

using namespace std;

class rectangle
{

 public:
 int length;
 int breadth;

 int area ()
 {
     return length*breadth;
 }
 int primeter ()
 {
     return 2*(length+breadth);
 }

};

int main ()
{
    rectangle r1,r2;

    r1.length=10;
    r1.breadth=20;
    cout<<r1.area()<<endl;
    cout <<r1.primeter()<<endl;


    r2.length=12;
    r2.breadth=3;
    cout<<r2.area()<<endl;
    cout <<r2.primeter()<<endl;
return 0;

}
