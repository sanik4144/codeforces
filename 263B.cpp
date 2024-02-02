#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    vector<long long int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.rbegin(), v.rend());

    if(n<m){
        cout<<"-1"<<endl;
    }
    else{
        cout<<v[m-1]<<" "<<v[m-1]<<endl;
    }
}