#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k, i,j,p=0, q=0;
    cin>>n>>k;
    int a[n];
    string s;

    for(i=0; i<n; i++){
        cin>>s; p=0;
        for(j=0; j<s.length(); j++){
            if(s[j]=='4' || s[j]=='7') p++;
        }
        if(p<=k) q++;
    }

    cout<<q;
}
