#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    string s1,s2;
    bool flag=false;
    int i;
    
    for(i=0; i<n-1; i++){
      int s1l=0,s1o=0,s2l=0,s2o=0;
        s1=s.substr(0,i+1);
        s2=s.substr(i+1,n);
        
        for(int j=0; j<s1.size(); j++){
          if(s1[j]=='O') s1o++;
          else s1l++;
        }
        for(int j=0; j<s2.size(); j++){
          if(s2[j]=='O') s2o++;
          else s2l++;
        }
        
        // cout<<s1<<" "<<s2<<endl;
        // cout<<s1o<<" "<<s1l<<endl;
        // cout<<s2o<<" "<<s2l<<endl;
        
        if(s1o!=s2o && s1l!=s2l){
          flag=true;
          break;
        }
    }
    
    if(flag){
      cout<<i+1<<endl;
    }
    else cout<<"-1"<<endl;

    
}