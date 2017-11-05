#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,a[1000],n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    j=n-1;
    for(i=0;i<n;i++)
    {
        cout<<a[j]<<" ";
        j=j-1;
    }


    return 0;
}
