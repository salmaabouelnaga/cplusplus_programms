#include <iostream>

using namespace std;

int main()
{
    int A[]={3,5,6,8,9};
    for (auto & x:A)
    {
        cout<<++x;
    }

    return 0;
}
