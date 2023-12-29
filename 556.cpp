#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,o=0,z=0,p,i;
    string s;

    cin>>n>>s;

    for(i=0; i<n; i++){
        if(s[i]=='0') z++;
        if(s[i]=='1') o++;
    }

    if(o>z){
        p=n-(2*z);
    }
    else{
        p=n-(2*o);
    }

    cout<<p<<endl;
}
