#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    int m=0;
      for(int arr_i = 0; arr_i < 5; arr_i++){
        if(arr[arr_i]>m){
        m=arr[arr_i];
      }
    }
   int sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
      sum=sum+arr[arr_i];
    }
   int max=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
      int a=sum;
      a=sum-arr[arr_i];
      if(a>max){
      max=a;
    }
    }
    int min=sum-m;
    cout <<min<<" "<<max<<endl;





    return 0;
}
