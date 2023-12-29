#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,index;
    char c;
    string s;
    cin>>c>>s;

    string s1="qwertyuiopasdfghjkl;zxcvbnm,./";

    for(i=0; i<s.size(); i++){
        index=s1.find(s[i]);
        if(c=='R'  ){
            cout<<s1[index-1];
        }
        else{
            cout<<s1[index+1];
        }
    }
}
