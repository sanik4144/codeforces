#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        map<char, int> cnt;

        for(auto u:s){
            cnt[u]++;
        }

        sort(s.begin(), s.end());
        int sz=unique(s.begin(),s.end())-s.begin();
        string str="";

        for(int i=0; i<sz; i++){
            str+=s[i];
        }

        int ans=0;
        for(int i=0; i<sz; i++){
            int x=s[i]-'A'+1;
            if(cnt[s[i]]>=x) ans++;
        }

        cout<<ans<<endl;
    }
}