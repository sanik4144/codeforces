#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<string,string>> v(m);

    for(int i=0; i<m; i++){
        string a,b;
        cin>>a>>b;

        v.push_back({a,b});
    }

    vector<string> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    for(auto u:vec){
      for(auto x:v){
        if(x.first==u){
            if(x.first.size()<=x.second.size()){
                cout<<x.first<<" ";
            }
            else{
                cout<<x.second<<" ";
            }
        }
      }
    }
}