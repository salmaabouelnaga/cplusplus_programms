#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str ="today";
     int count=0;

    for (int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"the length is"<<count;
    return 0;
}
