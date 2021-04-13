#include <iostream>

using namespace std;

int main()
{
    int s1,s2,s3;
    float avg;
    cout<<"enter the 3 subjects grades";
    cin>>s1>>s2>>s3;
    avg=(s1+s2+s3)/3;
    if (avg>=60)
    {
        cout<<"your grade is A";
    }
    else
    {
        if (avg>=35 && avg<60)
        {
            cout<<"your grade is B";
        }
        else
        {
            cout<<"your grade is c";
        }
    }
    return 0;
}
