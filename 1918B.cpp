#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> v(n);

        for(int i=0; i<n; i++) cin>>v[i];
        map<int,int> mp;

        for(int i=0; i<n; i++){
            int b;
            cin>>b;
            mp[v[i]]=b;
        }

        sort(v.begin(),v.end());

        for(auto u:v) cout<<u<<" ";
        cout<<endl;
        for(int u:v) cout<<mp[u]<<" ";
        cout<<endl;
    }
}