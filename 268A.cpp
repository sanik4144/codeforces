#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,f=0;
    cin>>n;
    int a[n],b[n];

    for(i=0,j=0; i<n,j<n; i++,j++){
        cin>>a[i]>>b[j];
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i]==b[j]){
                f++;
            }
        }
    }

    cout<<f<<endl;
}
