#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.rbegin(), v.rend());

    int ans=0;
    for(int i=0; i<n; i++){
        if(i%2==0) ans+=pow(v[i],2);
        else ans-=pow(v[i],2);
    }

    cout<<fixed<<setprecision(10)<<ans*3.1415926536;
}