#include <iostream>

using namespace std;

int main()
{
    int A[5]={1,2,3,4,5};
       int max= A[0];

    for (int x:A)
    {
        if( x >max)
        {
            max=x;
        }

    }
                    cout <<"max is"<<max;

    return 0;
}
