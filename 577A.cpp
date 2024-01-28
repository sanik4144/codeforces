#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,n,x;
    cin>>n>>x;

    long long int ans=0;
    for(i=1; i<=n; i++){
        if(x%i==0 && x/i<=n){
            ans++;
        }
    }

    cout<<ans<<endl;
}