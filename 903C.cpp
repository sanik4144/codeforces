#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }

  map<int,int> cnt;
  int maxfreq=0;
  for(auto u:v){
    cnt[u]++;
    maxfreq=max(cnt[u],maxfreq);
  }

  cout<<maxfreq<<endl;
}
