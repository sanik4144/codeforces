#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n;
    long long ans=0;
    cin>>n;

    long long int odd,even;
    if(n%2==0){
        even=n/2;
        odd=n/2;
    }
    else{
        even=n/2;
        odd=n/2+1;
    }
    ans=(even*(even+1))-(odd*odd);

    cout<<ans<<endl;
}