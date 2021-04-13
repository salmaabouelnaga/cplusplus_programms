#include <iostream>

using namespace std;

int main()
{
    int l=0,h=5,key,mid;
    int A[5]={3,5,7,9,13};
    cout<<"enter your key";
    cin>>key;
  mid= (l+h)/2;
        if(key==A[mid])
        {
            cout<<mid;
        }
        else if (key<A[mid])
        {
            h=mid-1;
            cout<<"found at "<<h;
        }
        else
        {
            l=mid+1;
            cout<<"found at "<<l;
        }

    return 0;
}
