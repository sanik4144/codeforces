#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int i=0; i<n; i++){
            long long int x;
            cin>>x;

            a[i]=pow(2,x);
        }
        
        long long int ans=0;
        for(long long int i=0; i<n-2; i++){
          for(long long int j=i+1; j<n-1; j++){
            for(long long int k=j+1; k<n; k++){
              long long int x=a[i];
              long long int y=a[j];
              long long int z=a[k];
              
              if(x+y>z && x+z>y && y+z>x){
                ans++;
              }
            }
          }
        }
        
        cout<<ans<<endl;
    }
}