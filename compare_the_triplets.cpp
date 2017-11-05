#include<iostream>
using namespace std;

int main() {
    int a[3],b[3];
    for(int i=0;i<3;i++){
    cin >> a[i];
  }
  for(int i=0;i<3;i++){
  cin >> b[i];
}
int c=0,d=0;
  for(int i=0;i<3;i++){
    if(a[i]>b[i]){
      c=c+1;
    }
    else if(a[i]<b[i]){
      d=d+1;
    }
    else if(a[i]==b[i]){
      cout<<"";
    }
  }
  cout<<c<<" "<<d;



  /*  if(a0>b0 || a1>b1 || a2>b2){
      int a=1;
      cout<<a;
    }
     if((a0>b0 && a1>b1) || a2>b2){
      int a=2;
      cout<<a;
    }
    if(a0>b0 || (a1>b1 && a2>b2)){
     int a=2;
     cout<<a;
   }
     if(a0>b0 && a1>b1 && a2>b2){
      int a=3;
      cout<<a;
    }
    if(a0==b0 || a1==b1 || a2==b2){
      cout<<" ";
    }
    if(a0<b0 || a1<b1 || a2<b2){
      int a=1;
      cout<<a;
    }
     if((a0<b0 && a1<b1) || a2<b2){
      int a=2;
      cout<<a;
    }
    if(a0<b0 || (a1<b1 && a2<b2)){
     int a=2;
     cout<<a;
   }
     if(a0<b0 && a1<b1 && a2<b2){
      int a=3;
      cout<<a;
    }*/
     /*if(a0>b0 || a1>b1 || a2>b2){
       cout<<A;
     }
     if(a0==b0 || a1==b1 || a2==b2){
       cout<<" ";
     }
    if(a0<b0 || a1<b1 || a2<b2){
       cout<<A;
     }*/
     cout<<endl;
    return 0;
}

/*#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
} */
