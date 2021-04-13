#include <iostream>

using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    int *q=&A[4];
    p++;
    cout<<*p<<endl;


    p=p+4;
        cout<<p-q<<endl;

    return 0;
}
