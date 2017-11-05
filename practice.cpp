#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j,q,k;
    cout<<"enter no of array and no of ques"<<endl;
    cin>>n>>q;
    cout<<"enter no of elements in array and the elements"<<endl;
    int arr[10][10];
    for(i=0;i<n;i++)
    {
      cin>>k;
      for(j=0;j<k;j++)
      {
        cin>>arr[i][j];
      }
    }
    for(int l=0;l<q;l++)
    {
      cin>>i>>j;
      cout<<arr[i][j]<<endl;
    }

    return 0;
}
