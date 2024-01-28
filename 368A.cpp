#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a,a+n);
    int m;
    cin>>m;

    int sum=0;
    for(int i=0; i<min(n,m); i++){
        sum+=a[i];
    }

    if(m>n){
        sum=sum-((m-n)*d);
    }

    cout<<sum<<endl;
}