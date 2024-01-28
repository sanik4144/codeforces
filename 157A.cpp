#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int r[30]={}, c[30]={};
    
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            r[i]+=a[i][j];
        }
    }
    
    for(int j=0; j<n; j++){
      for(int i=0; i<n; i++){
        c[j]+=a[i][j];
      }
    }
    
    int ans=0;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(r[i]<c[j]) ans++;
      }
    }
    
    cout<<ans<<endl;
}