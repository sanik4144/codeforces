#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,flag=0;
    string s,t;

    cin>>s>>t;
    n=s.length();

    for(i=0,j=n-1; i<n,j>=0; i++,j--){
        if(s[i]==t[j]) flag==0;
        else flag++;
    }

    if(flag==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
