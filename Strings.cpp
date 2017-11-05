#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a,b;
    cin>>a>>b;
    int len=a.size();
    int l=b.size();
    cout<<len<<" "<<l<<endl;
    string c=a+b;
    cout<<c<<endl;
    char x0= a[0];
    a[0]=b[0];
    b[0]=x0;
    cout<<a<<" "<<b<<endl;
    return 0;
}
