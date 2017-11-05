//addition of 3 complex nos.....
#include<iostream>
using namespace std;
class A
{
private:
  int real;
  int img;
public:
  void input()
  {
    cout<<"enter the value of real part"<<endl;
    cin>>real;
    cout<<"enter the value of img part"<<endl;
    cin>>img;
  }
  void display()
  {
    cout<<"complex no. is"<<real<<" +i"<<img<<endl;
  }
  A sum(A x,A y )
  {
    A w;
    w.real= real + x.real + y.real;
    w.img = img + x.img +y.img;
    return w;
  }
};
int main()
{
  A a;
  A b;
  A c;
  A w;
  a.input();
  a.display();
  b.input();
  b.display();
  c.input();
  c.display();
  w= c.sum(a,b);
  w.display();
  return 0;
}
