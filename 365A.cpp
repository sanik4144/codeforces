#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,l=0,t=0;;

    cin>>n>>k;
    int a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
        while(a[i]){
            if(a[i]%10>k){
            t++;
            break;
            }
            a[i]/=10;
        }
    }

    cout<<n-t<<endl;
}
