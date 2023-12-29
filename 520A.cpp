#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,i,a=0;
    cin>>n;
    cin>>s;

    transform(s.begin(),s.end(),s.begin(), ::tolower);
    sort(s.begin(),s.end());

    if(n<26) cout<<"NO"<<endl;
    else{
        for(i=0; i<n; i++){
            if(s[i]!=s[i+1]) a++;
        }

        if(a==26) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
