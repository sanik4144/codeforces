#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }

    int maxi=0, mini=0;
    for(j=0; j<n; j++){
        a[j]=abs(a[j]);
        for(i=0; i<n; i++){
                maxi=mini=b[j];
            b[j]=a[j]+a[i+1];
            //cout<<a[j]<<" ";
            if(b[j]<mini){
                mini=b[j];
            }
            if(b[j]>maxi){
                maxi=b[j];
            }
        }
    }

    cout<<mini<<" "<<maxi<<endl;
}
