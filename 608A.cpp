#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, fl;
    cin>>n>>fl;

    int ans=fl;
    while(n--){
        int p,t;
        cin>>p>>t;

        ans=max(ans,p+t);
    }

    cout<<ans<<endl;
}