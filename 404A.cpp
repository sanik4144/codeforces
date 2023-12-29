#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n;
    m=n;

    string s[n][m];

    for(i=0; i<n; i++){
        cin>>s[i][j];
    }
    for(i=0; i<n; i++){
        cout<<s[i][j];
    }
}
