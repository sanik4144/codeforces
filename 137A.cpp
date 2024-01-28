#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=s[i+1]){
            ans++;
        }
    }


    for(int i=0; i<s.size(); i++){

        string str=s.substr(i,5);
        
        if(str=="CCCCC" || str=="PPPPP"){
          i+=4;
          if(s[i]==s[i+1]){
            ans++;
          }
        }
        
        //cout<<str<<endl;
    }

    cout<<ans<<endl;
}