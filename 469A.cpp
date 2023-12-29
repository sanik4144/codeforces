#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,q,d=0;

    cin>>n;
    cin>>p;
    int x[2*n],a[p];
    for(i=0; i<p; i++){
        cin>>a[i];
        x[i]=a[i];
    }
    cin>>q;
    int b[q],k=i;
    for(i=0; i<q; i++){
        cin>>b[i];
        x[k]=b[i];
        k++;
    }

    for(i=0; i<p+q; i++){
        for(j=0; j<i; j++){
            if(x[i]==x[j]) break;
        }

        if(i==j) d++;
    }

    if(d==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;


}
