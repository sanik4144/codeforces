#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double ans=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        ans+=a[i];
    }

    ans=ans/n;

    cout<<ans<<endl;
}