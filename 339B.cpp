#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int m,n;
    cin>>m>>n;

    vector<long long int> v(n);
    for(long long int i=0; i<n; i++) cin>>v[i];

    long long int d=v[0]-1;

    for(long long int i=0; i<n-1; i++){
        if(v[i]<=v[i+1]){
            d+=v[i+1]-v[i];
        }
        else if(v[i]>v[i+1]){
            d+=m-(v[i]-v[i+1]);
        }
    }

    cout<<d<<endl;
}