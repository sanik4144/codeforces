#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> q,w;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        q.push_back({a,b});
    }
    sort(q.begin(),q.end());
    
    //for(auto u:q) cout<<u.first<<" "<<u.second<<endl;

    int ans=0;
    for(int i=0; i<n; i++){
      bool l=false,r=false,d=false,u=false;
      
      for(int j=0; j<n; j++){
        if(q[i].first==q[j].first && q[i].second<q[j].second){
          u=true;
        }
        else if(q[i].first==q[j].first && q[i].second>q[j].second){
          d=true;
        }
      }
      for(int j=0; j<n; j++){
        if(q[i].second==q[j].second && q[i].first<q[j].first){
          r=true;
        }
        else if(q[i].second==q[j].second && q[i].first>q[j].first){
          l=true;
        }
      }
      
      if(u==true && d==true && r==true && l==true) ans++;
    }
    
    cout<<ans<<endl;
    
}