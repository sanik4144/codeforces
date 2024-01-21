#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<string,int> &p1, const pair<string,int> &p2){
  return p1.second>p2.second;
}
int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0; i<n; i++){
      string s;
      cin>>s;
        v.push_back(s);
    }

    map<string,int> cnt;
    for(auto u:v){
        cnt[u]++;
    }
    vector<pair<string, int>> cnt_v(cnt.begin(), cnt.end());
    sort(cnt_v.begin(),cnt_v.end(), cmp);
    
    cout<<cnt_v[0].first<<endl;
}