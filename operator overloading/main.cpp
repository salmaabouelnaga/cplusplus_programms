#include <iostream>

using namespace std;
class complex{

public:
    int real;
    int img;

     complex add (complex x)  // lw ktbna operator + mkan eladd htb2a nfsha bs t7t htb2a c3=c1+c2 3la tool
     {
         complex temp;
         temp.real=real+x.real;
         temp.img=img+x.img;
         return temp;
     }



};

int main()
{
    complex c1,c2,c3;
  c1.real=3, c1.img=5;
    c2.real=3, c2.img=5;
    c3=c1.add(c2);
    cout<<c3.real<< "+i"<<c3.img;

}
