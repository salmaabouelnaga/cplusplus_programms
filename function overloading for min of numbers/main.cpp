#include <iostream>

using namespace std;


int min (int x,int y)
{
    if(x<y)
    {
        return x;
    }
    else{
        return y;
    }
}

int min (int x,int y, int z)
{
    if (x<y && x<z)
    {
        return x;
    }
    else if (y<x && y<z)
    {
        return y;
    }
    else{
        return z;
    }

}

float min ( float x, float y)
{
   if(x<y)
    {
        return x;
    }
    else{
        return y;
    }
}




int main()
{

    int a,g,b=12,c=23,d=4;
    float h,e=3.21f, f=5.8f;

    a= min (b,c);
    g=min (b,c,d);
    h=min (e,f);
    cout <<"min is"<<a<<endl <<endl <<g<<endl<<h;

    return 0;
}
