#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int a[n];
    deque<pair<int,int>> v;
    
    for(int i=1; i<=n; i++){
      cin>>a[i];
      
      v.push_back({i,a[i]});
    }
    int ans;
    while(!v.empty()){
      if(v.front().second > m){
        int x=v.front().second-m;
        v.push_back({v.front().first, x});
      }
      ans=v.front().first;
      v.pop_front();
    }
    
    cout<<ans<<endl;
}
