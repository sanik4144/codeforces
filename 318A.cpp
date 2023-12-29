#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,i,j,p=1,q=2,l;
    cin>>n>>k;
    long long int e[n],o[n],x[n];

    if(n%2!=0){
        m=n/2+1;
    }
    else m=n/2;

    for(i=1; i<=m; i++){
        o[i]=p;
        p+=2;
        x[i]=o[i];
    }
    l=i;

    for(i=1; i<=n/2; i++){
        e[i]=q;
        q+=2;
        x[l]=e[i];
        l++;
    }

        cout<<x[k]<<endl;





    /*for(i=1; i<=m; i++){
        cout<<o[i]<<" ";
    }
    for(i=1; i<=n/2; i++){
        cout<<e[i]<<" ";
    }*/
}
