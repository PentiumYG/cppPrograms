//this is my first program in codechef
#include <iostream>
using namespace std;

class A
{
private:
   int real;
   int img;
 public:
   void input()
   {
       cout<<"enter the value of real part:"<<endl;
       cin>>real;
       cout<<"enter the value of imaginary part:"<<endl;
       cin>>img;
   }
   void display()
   {
       cout<<"the complex no is:"<<real<<" +i "<<img<<endl;
   }
   A sum( A c)
   { A w;
     w.real= real + c.real;
     w.img = img + c.img;
     return w;
   }

};
int main()
{
    A a;
    A b;
    A w;
   cout<<"enter first complex no"<<endl;;
   a.input();
   a.display();
   cout<<"enter second complex no"<<endl;;
   b.input();
   b.display();
    w = a.sum(b);
    w.display();
   return 0;
}
