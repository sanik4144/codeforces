#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int p[n];
    for(i=1; i<=n; i++){
        cin>>p[i];
    }

    for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                if(p[j]==i){
                    cout<<j<<" ";
                }
            }
    }
    cout<<endl;
}
