#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,m,x,ans=0;
    cin>>n>>m;
    long long int a[n],b[m],p=0;

    for(i=1;i<=m;i++){
       int x = (n+(i%5))/5;
        ans+=x;

    }

    cout<<ans<< " ";










    /*for(i=1; i<=n; i++){
        a[i]=i;
    }
    for(i=1; i<=m; i++){
        b[i]=i;
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            if((a[i]+b[j])%5==0) p++;
        }
    }

    cout<<p<<endl;*/
}
