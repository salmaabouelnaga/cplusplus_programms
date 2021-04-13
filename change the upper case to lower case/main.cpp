#include <iostream>

using namespace std;

int main()
{
    string str="BALCONY";
    string ::iterator=it;
    for(it=str.begin();it!=str.end();it++)
    {
        if(it>=65&&it<=90)
        {
            it=it+32;
        }
    }
    cout<<it;

    return 0;
}
