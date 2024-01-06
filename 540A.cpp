#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s1,s2;
    cin>>n>>s1>>s2;
    int ans=0;

    for(int i=0; i<n; i++){
        int x=s1[i]-'0';
        int y=s2[i]-'0';

        int a,b,c;
        a=abs((10+x)-y);
        b=abs((10+y)-x);
        c=abs(x-y);

        ans+=min(a,min(b,c));
    }

    cout<<ans<<endl;
}