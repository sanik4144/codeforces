#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x,y,n,m;

    cin>>n;
    int a[n];
    for(i=1; i<=n; i++){
        cin>>a[i];
    }

    cin>>m;

    for(j=1; j<=m; j++){
        cin>>x>>y;
        if(x==1){
            a[x+1]=a[x+1]+(a[x]-y);
            a[x]=0;
        }
        else if(x==n){
            a[x-1]=a[x-1]+(y-1);
            a[x]=0;
        }
        else{
            a[x-1]=a[x-1]+(y-1);
            a[x+1]=a[x+1]+(a[x]-y);
            a[x]=0;
        }
    }

    for(j=1; j<=n; j++){
        cout<<a[j]<<endl;
    }


}
