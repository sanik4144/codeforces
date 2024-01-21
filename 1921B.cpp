#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;

        long long int diff=0, tot=0;
        long long int os1=0, os2=0;

        for(long long int i=0; i<n; i++){
            if(s1[i]!=s2[i]) tot++;
            if(s1[i]=='1') os1++;
            if(s2[i]=='1') os2++;
        }

        diff=abs(os1-os2);

        long long int ans=diff+(tot-diff)/2;
        
        cout<<ans<<endl;
    }
}