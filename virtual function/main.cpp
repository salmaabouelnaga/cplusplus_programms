#include <iostream>

using namespace std;
class  basic{

public:
   virtual void start ()
    {
        cout <<"base class"<<endl;
    }


};

class advanced :public basic
{

void start ()
{
    cout <<"advanced class"<<endl;
}



};

int main()
{
  basic *p=new advanced();
  p ->start();      // lw m3mlnash el virtyal hyroo7 y call el base class
    return 0;
}
