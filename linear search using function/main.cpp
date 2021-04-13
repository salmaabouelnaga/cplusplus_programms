#include <iostream>

using namespace std;


int search (int A[] ,int n,int key)
{
    for (int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            return i;
        }
    }
}
int main()
{
    int k;
   int A[]={3,5,8,9,10,12};
   cout <<"enter the number you want to search about"<<endl;
   cin>>k;
   int index= search(A,6,k);
   cout<<"your index found at"<<" "<<index;


}
