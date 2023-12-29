#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,d,f=1;
    cin>>n>>d;

    int s=pow(10,n-1);
    int b=pow(10,n)-1;

    for(i=s; i<=b; i++){
        if(i%d==0) {
                f=0;
                break;
        }
    }

    if(f==0) cout<<i<<endl;
    else cout<<"-1"<<endl;
}
