//arithematic operations on two variables using class and object
#include<iostream>
using namespace std;
class opp
{
private:
  float a,b,c;
public:
  void input()
  {
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
  }
  void add()
   {
     c=a+b;
   }
   void sub()
   {
     c=a-b;
   }
   void multiply()
   {
     c=a*b;
   }
   void divide()
   {
     c=a/b;
   }
   void display()
   {
     cout<<"the result is:"<<c<<endl;;
   }
};
int main()
{
  opp o;
  o.input();
  o.add();
  o.display();
  o.sub();
  o.display();
  o.multiply();
  o.display();
  o.divide();
  o.display();
  return 0;
}
