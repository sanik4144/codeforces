#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    map<string, int> vis;
    for(int i=0; i<n; i++){
      string s;
      cin>>s;

      if(vis[s]==1) cout<<"Yes"<<endl;
      else{
        vis[s]=1;
        cout<<"No"<<endl;
      }
    }
}
