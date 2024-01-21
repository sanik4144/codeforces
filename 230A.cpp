#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;

        v.push_back({x,y});
    }

    sort(v.begin(),v.end());
    int flag=true;
    for(int i=0; i<n; i++){
      if(s<=v[i].first){
        flag=false;
        break;
      }
      else{
        s+=v[i].second;
      }
    }
    
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}