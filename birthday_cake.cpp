#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int  max=0;
   int a=1;
    for(int ar_i = 0; ar_i < n; ar_i++){
        if(ar[ar_i]>max){
            max=ar[ar_i];
        }
        else if( max==ar[ar_i] ){
              a=a+1;
          }
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
