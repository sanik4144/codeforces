#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(4);
    for(int i=0; i<4; i++){
        cin>>v[i];
    }

    map<int,int> cnt;
    for(auto u:v){
        cnt[u]++;
    }

    int ans=0;
    for(auto u:cnt){
            ans+=(u.second-1);
    }

    cout<<ans<<endl;
}