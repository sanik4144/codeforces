#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end(), greater<char>());
    
    for(int i=0; i<s.size(); i++){
        cout<<s[i];
        if(s[i]!=s[i+1]) break;
    }
}