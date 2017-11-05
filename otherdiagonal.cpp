#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    /*int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }*/
    int a[3][3],i,j;
    for( i = 0;i < 3;i++){
       for( j = 0;j < 3;j++){
         cin>>a[i][j];
       }
     }
     int total=0;
     for( i = 0;i < 3;i++){
        for(j =0 ;j < 3;j++){
               if(i+j==2)
            {
                 cout<<a[i][j]<<" ";
                 total=total+a[i][j];
            }
        }
      }
      cout<<endl<<total<<endl;
      int sum=0;
      for( i = 0;i < 3;i++){
         for(j =0 ;j < 3;j++){
                if(i==j)
             {
                  cout<<a[i][j]<<" ";
                  sum=sum+a[i][j];
             }
         }
       }
       cout<<endl<<sum<<endl;
       int T;
       T=sum+total;
       cout<<T;


    return 0;
  }
