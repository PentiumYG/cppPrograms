#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int positive=0, negative=0, zero=0;
    for(int arr_i = 0;arr_i < n;arr_i++){
        if(arr[arr_i]>0){
          positive= positive +1;
        }
        else if(arr[arr_i]<0){
            negative=negative+1;
        }
        else {
            zero=zero+1;
        }

    }
    float a= (float)positive/(float)n;
    float b= (float)negative/(float)n;
    float c= (float)zero/(float)n;
    std::cout << std::fixed << std::setprecision(6) <<a<<endl<<b<<endl<<c<<endl;

    return 0;
}
