#include <iostream>

using namespace std;


    int max (int x, int y, int z)
    {
        if(x>y && x>z)
        {
       return x;
        }
        else if (y>x && y>z)
        {
         return y;
          }
         else{
         return z;
         }


        }

    int main()
     {
    int a=10,b=12,c=3;
    int  d;
    d= max (a,b,c);
    cout<< "max is"<<d;
    return 0;
    }


