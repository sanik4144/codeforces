#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a,a+n);

    int ans=0;
    for(int i=0; i<n-1; i++){
        ans+=a[i];
    }

    if(ans>s) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}