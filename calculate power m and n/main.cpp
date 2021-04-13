#include <iostream>
#include <cmath>

using namespace std;




int power (int m,int n)
{
    int result=pow(m,n);
    return result;
}


int main()
{
    int a,b=3,c=2;
    a= power(b,c);
    cout<<a;


    return 0;
}
