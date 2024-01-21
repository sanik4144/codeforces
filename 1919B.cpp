#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;

        int p=0,m=0;
        for(int i=0; i<n; i++){
            if(s[i]=='+') p++;
            else m++;
        }
        int ans=0;
        if(p>m){
            ans=n-(2*m);
        }
        else if(m>p){
            ans=n-(2*p);
        }

        cout<<ans<<endl;
    }
}