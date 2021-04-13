#include <iostream>

using namespace std;

int main()
{
    int pcount=0,ncount=0;
    int A[]={1,4,6,-8,9,-90};
    for (int x:A)
    {
        if(x>0)
        {
            pcount++;

        }
        else if (x<0)
        {
          ncount++;


        }

    }
    cout<<"nr of positive"<<pcount<<"nr of negative"<<ncount;
    return 0;
}
