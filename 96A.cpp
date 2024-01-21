#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag=true;
    if(s.size()<7){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0; i<s.size()-6; i++){
            if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1'){
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
            else if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0'){
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
            else flag=false;
        }
    }
    if(!flag) cout<<"NO"<<endl;
}