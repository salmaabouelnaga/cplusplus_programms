#include <iostream>

using namespace std;

int main()
{

    string mail= "salmamajid@gmail.com";
    int i= (int )mail.find('@');
    string usname=  mail.substr(0,i);
    cout << "your username is" <<usname<< endl;
    return 0;
}
