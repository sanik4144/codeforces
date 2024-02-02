#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long int> v1(n),v2(n);

    for(int i=0; i<n; i++) cin>>v1[i];
    for(int i=0; i<n; i++) cin>>v2[i];

    long long int sum1=v1[0], sum2=v2[0];

    for(int i=1; i<n; i++){
        sum1|=v1[i];
        sum2|=v2[i];
    }

    cout<<sum1+sum2<<endl;

}