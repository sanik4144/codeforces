#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,p=0,Max,Min;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
        Max=Min=a[0];
    for(i=0; i<n; i++){
        if(a[i]>Max) Max=a[i];
        if(a[i]<Min) Min=a[i];
    }

    for(i=0; i<n; i++){
        if(a[i]>Min && a[i]<Max) p++;
    }

    cout<<p<<endl;
}
