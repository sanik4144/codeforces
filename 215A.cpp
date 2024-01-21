#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    double a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    cin>>m;
    double b[m];
    for(int i=0; i<m; i++) cin>>b[i];

    vector<int> v;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            double x=b[j]/a[i];
            int y=ceil(x);
            
            if(x==y) v.push_back(x);
        }
    }

    int maxi= *max_element(v.begin(),v.end());
    
    int ans=0;
    
    for(auto u:v){
        if(u==maxi) ans++;
    }
    
    cout<<ans<<endl;
}