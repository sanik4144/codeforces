#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> cap;
        stack<char> sml;
        
        for(int i=0; i<s.size(); i++){
          if(s[i]>='A' && s[i]<='Z'){
            if(s[i]!='B'){
              cap.push(s[i]);
            }
            else if(!cap.empty() && s[i]=='B'){
              cap.pop();
            }
          }
          if(s[i]>='a' && s[i]<='z'){
            if(s[i]!='b'){
              sml.push(s[i]);
            }
            else if(!sml.empty() && s[i]=='b'){
              sml.pop();
            }
          }
        }

        string str="";
        
        for(int i=s.size()-1; i>=0; i--){
          if(!cap.empty() && s[i]==cap.top()){
            str+=cap.top();
            cap.pop();
          }
          else if(!sml.empty() && s[i]==sml.top()){
            str+=sml.top();
            sml.pop();
          }
        }
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
}