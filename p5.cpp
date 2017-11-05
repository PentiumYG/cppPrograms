#include<iostream>
using namespace std;

class matrix
{
private:
  int a[3][3] , b[3][3] , c[3][3];
  int i,j;
public:
  void input()
  {
    cout<<"enter the value of matrix a:"<<endl;
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        cin>>a[i][j];
      }
    }
    cout<<"enter the value of matrix b:"<<endl;
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        cin>>b[i][j];
      }
    }
  }
    void display()
    {
      cout<<"The value of matrix a:"<<endl;
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
      }
      cout<<"The value of matrix b:"<<endl;
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          cout<<b[i][j]<<" ";
        }
        cout<<endl;
      }
    }
    void sum()
    {
      cout<<"sum is:"<<endl;
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          c[i][j]=a[i][j]+b[i][j];
        }
      }
    }
    void displayc()
    {
      cout<<"The value of matrix c:"<<endl;
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          cout<<c[i][j]<<" ";
        }
        cout<<endl;
      }
    }


};
int main()
{
  matrix m;
  m.input();
  m.display();
  m.sum();
  m.displayc();
  return 0;
}
