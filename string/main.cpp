#include <iostream>
#include <string>

using namespace std;

int main()
{
      string str ="h,e,l,l,o,w";
     string::iterator it;
     for (it=str.begin();it!= str.end();it++)
     {
         cout<<*it;
     }

    return 0;
}
