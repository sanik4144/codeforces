#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;

    map<char,int> cnt;
    for(auto u:s){
        cnt[u]++;
    }
    bool flag=true;
    
    for(auto u:cnt){
      if(u.second%n != 0){
        flag=false;
        break;
      }
    }
    
    if(flag==false){
      cout<<"-1"<<endl;
    }
    else{
      string str;
      for(auto u:cnt){
        int x=u.second/n;
        for(int i=0; i<x; i++){
          str+=u.first;
        }
      }
      for(int i=0; i<n; i++)
      cout<<str;
  }
}