#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    map<char, int> cnt;

    for(auto u:s){
        cnt[u]++;
    }

    if(cnt['4']==0 && cnt['7']==0){
      cout<<"-1"<<endl;
    }
    else if(cnt['4']>=cnt['7']){
      cout<<"4"<<endl;
    }
    else{
      cout<<"7"<<endl;
    }
}