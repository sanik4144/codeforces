#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,d,i,sum=0,f=0;
    cin>>n>>b>>d;
    int a;

    for(i=0; i<n; i++){
        cin>>a;
        if(a>b) continue;
        sum+=a;
        if(sum>d){
            f++;
            sum=0;
        }
    }

    cout<<f<<endl;
}
