#include <iostream>

using namespace std;

class student {

private:
    string name ;
    int roll ;
    int mathgrade;
    int physicsgrade;
    int biologygrade;

public :

student (int r,string n,int m,int p,int b)
 {
         roll =r;
        name =n;
         mathgrade=m;
         physicsgrade=p;
         biologygrade=b;
    }

    int total()
    {

    return mathgrade+physicsgrade+biologygrade;

    }
    char grades ()
    {
         float avg=total()/3;
         if (avg>60)
         {
             return 'A';
         }
         else if (avg>=40 && avg<60){
                return 'B';
         }
         else
         {
             return 'c';
         }
    }
};

int main ()
{
    int roll,m,p,b;
    string name;
    cout<<"enter your roll nr";
    cin>>roll;
      cout<<"enter your name";
    cin>>name;
    cout<<"enter your math grade";
    cin>>m;
     cout<<"enter your physics grade";
    cin>>p;
     cout<<"enter your biology grade";
    cin>>b;
    student k ( roll, name, m,  p, b);
    cout<<"your total marks is"<<k.total()<<endl;
    cout <<"your total grades are"<<k.grades()<<endl;

}
