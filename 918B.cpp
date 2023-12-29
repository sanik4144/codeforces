#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;

  map<string,string> mp;

  for(int i=0; i<n; i++){
    string name,ip;
    cin>>name>>ip;

    mp[ip]=name;
  }
  while(m--){
    string s1,s2;
    cin>>s1>>s2;
    s2.pop_back();

    for(auto u:mp){
      if(s2==u.first){
        cout<<s1<<" "<<s2<<";"<<"  #"<<u.second<<endl;
      }
    }
  }
}
