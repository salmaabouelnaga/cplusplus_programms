#include <iostream>

using namespace std;

int main()
{
    int day;
    cout<<"enter the day";
    cin>>day;
   switch (day){
   case 1 : cout <<"sat";
   break;
   case 2 : cout <<"sun";
   break;
   case 3: cout<<"mon";
   break;
   case 4: cout<<"tue";
   break;
   case 5: cout<<"thur";
   break;
   case 6: cout<<"fri";
   break;
   default: cout<<"invalid day";
   }
    return 0;
}
