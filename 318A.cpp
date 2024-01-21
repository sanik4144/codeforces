#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,d = 0,ans = 0;
    cin>>n>>k;

    d = (n + 1) / 2;
    if(k <= d){
        ans = (k * 2) - 1;
    }
    else{
        ans = (k - d) * 2;
    }
    cout<<ans<<endl;
}