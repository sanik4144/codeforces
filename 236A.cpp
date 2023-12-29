#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,d=0;
    string s;
    cin>>s;

    n=s.size();

    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            if(s[i]==s[j]) break;
        }
        if(i==j) d++;
    }

    if(d%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
