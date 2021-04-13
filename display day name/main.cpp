#include <iostream>

using namespace std;

int main()
{
    int day;
    cout<<"enter the day";
    cin>>day;
    if (day==1){
        cout<<"today is sat ";
    }
    else if(day==2){
        cout<<"today is sun";
        }
        else if(day==3){
        cout<<"today is mon ";
        }
    else if(day==4){
    cout<<"today is tue ";
    }
         else if(day==5){
            cout<<"today is wed";
         }
    else{
        cout<<"today is fri";
    }
    return 0;
}
