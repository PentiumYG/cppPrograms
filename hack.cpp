#include<iostream>
using namespace std;
int max_of_four(int a,int b,int c,int d)
/*{
   int q;
    int arr[4]={a,b,c,d};
    int max=arr[0];
    for(int i=0;i<4;i++)
    {
        if (max<arr[i+1])
             max=arr[i+1];
        else
            q=max;
    }
    return q;
}*/
{if(a>=b && a>=c && a>=d)
return a;
else if(b>=a && b>=c && b>=d)
return b;
else if(c>=a && c>=b && c>=d)
return c;
else
return d;
}



int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;

    return 0;
}
