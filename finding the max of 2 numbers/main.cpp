#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter your 3 numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"a is the max "<<a;

    }

        else
        {
            if(b>a && b>c)
            {
                cout<<"b is max"<<b;
            }
            else
            {
                cout<<"c is max"<<c;
            }
        }

    return 0;
}
