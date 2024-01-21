#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        for(int i=1; i<9; i++){
            int x=s[1]-'0';
            if(i==x) continue;
            else cout<<s[0]<<i<<endl;
        }
        for(char i='a'; i<'i'; i++){
            if(i==s[0]) continue;
            else cout<<i<<s[1]<<endl;
        }
    }
}