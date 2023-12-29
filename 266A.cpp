#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,f=0;

    cin>>n;
    char c[n];

    for(i=0; i<n; i++){
        cin>>c[i];
    }

    for(i=0; i<n; i++){
        if(c[i]==c[i+1]){
            f++;
        }
    }

    cout<<f<<endl;
}
