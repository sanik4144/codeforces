#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3],b[3];
    int sum1=0,sum2=0;

    for(int i=0; i<3; i++){
        cin>>a[i];
        sum1+=a[i];
    }
    for(int i=0; i<3; i++){
        cin>>b[i];
        sum2+=b[i];
    }
    int n;
    cin>>n;

    if(sum1%5==0) sum1=sum1/5;
    else sum1=(sum1/5)+1;

    if(sum2%10==0) sum2=sum2/10;
    else sum2=(sum2/10)+1;

    if(sum1+sum2<=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}