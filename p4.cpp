//using scope resolution operator
#include<iostream>
using namespace std;
class sum
{
private:
  int a,b,c;
public:
  void input();
  void add();
  void display();
};
void sum::input()
{
  cout<<"enter the value of a:"<<endl;
  cin>>a;
  cout<<"enter the value of b:"<<endl;
  cin>>b;
}
void sum::add()
 {
   c=a+b;
 }
 void sum::display()
  {
    cout<<"the result is:"<<c<<endl;;
  }
int main()
{
  sum s;
  s.input();
  s.add();
  s.display();
  return 0;
}
