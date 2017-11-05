// this is a demo program to check inheritance
// when base class has parameterised constructor and derived  has default
#include <iostream>
using namespace std;
class base
{public:
  base( int x)
  { cout <<" base class parameterised constructor"<<endl;
}
~base()
{ cout << " base class destructor"<<endl;}
};
class derived : public base
{
  public :
  derived(): base (10) // destructor accessing the base class parameterised constructor and destructor
  {cout <<" derived class default constructor"<<endl;
}
~derived ()
{cout <<"derived class destructor" <<endl;}
};
int main()
{
  derived d;
  return 0;
}
