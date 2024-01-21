#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }

    vector<int> v(5);
    int x=1;
    for(int i=0; i<5; i++){
        v[i]=x;
        x+=(n+1);
    }
    
    int ans=0;
    for(auto u:v){
        
        if(u>sum && u<=(sum+5)) ans++;
    }

    cout<<5-ans<<endl;
}