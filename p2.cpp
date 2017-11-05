//addition of two numbers using class and object.
#include<iostream>
using namespace std;
class sum
{
private:
  int a,b,c;
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
   void display()
   {
     cout<<"the result is:"<<c<<endl;;
   }
};
int main()
{
  sum s;
  s.input();
  s.add();
  s.display();
  return 0;
}
