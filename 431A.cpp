#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,d, f=0;

    cin>>a>>b>>c>>d;
    string s;
    cin>>s;

    for(i=0; i<s.size(); i++){
        if(s[i]=='1') f+=a;
        else if(s[i]=='2') f+=b;
        else if(s[i]=='3') f+=c;
        else if(s[i]=='4') f+=d;
    }

    cout<<f<<endl;
}
