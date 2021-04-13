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

 //rectangle() // non pams constructor, and constructor dosnt have a return type because it takes the same name as the class
 //{
    // length=1;
    // breadth=1;
 //}

 rectangle(int l=1, int b=1) //  pams constructor, we took setlength and setbreadth because of avoiding -ve nrs // by making default arguments we now dont need the non pamtz constructor as this one will work as paam and non
 {
     setlength(l);
     setbreadth(b);
 }

 rectangle (rectangle & r) //copy constructor, we took thr eference r
 {
     length=r.length;
     breadth=r.breadth;
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
  //  rectangle r; // dh kda bncall eldefault constructor aw non pamatrized constru
  rectangle r(10,5);
  rectangle r2(r); // by calling r and copinf from it, r2 will be the same
    cout <<r.area(); // without seeting the length or breadth so here is default constructor
}
