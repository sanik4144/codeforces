#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,e,o=0, t=0, th=0;
    cin>>n;
    int a[n];

    for(i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]==1) o++;
        else if(a[i]==2) t++;
        else if(a[i]==3) th++;
    }

    int m=min(min(o,t),th);
    cout<<m<<endl;

    while(m--){
    for(i=1; i<=n; i++){
        if(a[i]==1) cout<<i<<" ";
        for(j=i; j<=(n-1); j++){
                a[j]=a[j+1];
                i--;
                n--;
            }
    }

    for(i=1; i<=n; i++){
        if(a[i]==2) cout<<i<<" ";
        for(j=i; j<=(n-1); j++){
                a[j]=a[j+1];
                i--;
                n--;
            }
    }

    for(i=1; i<=n; i++){
        if(a[i]==3) cout<<i<<" ";
        for(j=i; j<=(n-1); j++){
                a[j]=a[j+1];
                i--;
                n--;
            }
    }


    cout<<endl;
}
}
