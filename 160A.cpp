#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,sum1=0,sum2=0,f;
    cin>>n;
    m=n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);

    for(i=0; i<n; i++){
        sum1+=a[i];
    }

    f=sum1/2;
    i=0;
    for(j=m-1; j>=0; j--){
        sum2+=a[j];
        i++;
        if(sum2>f){
            break;
        }
    }

    /*while(sum1>=sum2){
        for(i=0; i<n; i++){
            sum1+=a[i];
        }
        for(j=m-1; j>i; j--){
            sum2+=a[j];
        }
        n--;

    }*/

    //cout<<sum1<<" "<<sum2<<endl;
    cout<<i<<endl;
}
