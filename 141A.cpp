#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s;
    cin>>s1>>s2>>s;
    string str=s1+s2;

    sort(str.begin(),str.end());
    sort(s.begin(),s.end());

    if(str==s){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}