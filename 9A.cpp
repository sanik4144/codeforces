#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,m=0,ans;

    cin>>a>>b;
    m=max(a,b);

    m=(6-m)+1;


    for(i=1; i<=6; i++){
        if(m%i==0 && 6%i==0){
                ans=i;

        }
    }
    cout<<m/ans<<"/"<<6/ans<<endl;
}
