#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int i,j,n,m,f=0;

    cin>>s>>t;
    n=s.size();
    m=t.size();

    /*for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(s[i]==t[j]){
                f++;
                break;
            }
        }
    }*/
    i=j=0;
    while(m--){
        if(s[i]==t[j]){
            i++;
        }
        j++;
    }

    cout<<i+1<<endl;
}
