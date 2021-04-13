#include <iostream>

using namespace std;


    template<class T>
    T maxim (T x, T y)
    {
     return  x>y?x:y;
    }




  int main()
  {

  cout << maxim (10,12)<<endl;

  cout << maxim (10.5,12.5)<<endl;
  return 0;
  }
