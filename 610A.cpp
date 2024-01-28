#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n;
    cin>>n;

    long long int x,count, a, i=1, ans=0;
    x=n/2;
    count=n/4;

    if(n%2!=0) cout<<"0"<<endl;
    else{
        while(count--){
            a=x-i;

            if(a!=i) ans++;
            i++;
        }

        cout<<ans<<endl;
    }
}