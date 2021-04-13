#include <iostream>

using namespace std;

class rectangle
{

 public:
 int length; //data
 int breadth;

 int area () //function
 {
     return length*breadth;
 }
 int primeter ()
 {
     return 2*(length+breadth);
 }

};

int main()
{
    rectangle r1; // dh kda fel stack lew fel heap rectangle *ptr=new rectangle;
    rectangle *ptr;
    ptr=& r1;
    ptr->length=10;
    ptr->breadth=3;
    cout<<ptr->area()<<endl;
        cout<<ptr->primeter()<<endl;


    return 0;
}
