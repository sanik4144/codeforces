#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back({x,i+1});
    }

    sort(v.begin(),v.end());

    int sum=0, ins=0;

    vector<int> b;
    int i=0;
    while(sum<=k && i<n){
        sum+=v[i].first;
        
        if(sum<=k){
          b.push_back(v[i].second);
          ins++;
        }
        i++;
    }
    sort(b.begin(),b.end());
    
    cout<<ins<<endl;
    for(auto u:b) cout<<u<<" ";
}