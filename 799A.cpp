#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,t,k,d;

    cin>>n>>t>>k>>d;

    float omt=ceil((t*n)/k);
    float dmc=ceil((k*d)/t);

    float m=((t*(n-dmc))/k);

    if(m<(omt-d)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



}
