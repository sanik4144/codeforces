#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+2];
    a[1]=0;
    for(int i=2; i<n+2; i++){
        int x;
        cin>>x;
        a[i]=a[i-1]+x;
    }
    int s,t;
    cin>>s>>t;

    int d1=abs(a[t]-a[s]);
    int d2=a[n+1]-d1;
    cout<<min(d1,d2)<<endl;
}