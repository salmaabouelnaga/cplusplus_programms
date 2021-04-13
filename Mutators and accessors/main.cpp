#include <iostream>

using namespace std;

class rectangle
{

 private:
 int length; //data
 int breadth;
 public:
 int area () //function
 {
     return length*breadth;
 }
 int primeter ()
 {
     return 2*(length+breadth);
 }

 int setlength(int l)
 {
    if(l>=0)
    {
        length=l;
    }
    else{
        length=0;
    }
 }

 int setbreadth(int b)
 {
     if(breadth>=0)
     {
         breadth=b;
     }
     else{
        breadth=0;
     }
        }

int getlength()
{
    return length;
}
int getbreadth()
{
    return breadth;
}

};
int main()
{
    rectangle r;
    r.setlength(10);
    r.setbreadth(3);
    cout<<r.area();
    cout<<r.getlength();
}
