#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        long long int p=1;
        for(int i=0; i<n; i++){
            cin>>a[i];
            p*=a[i];
        }
        double ans=2023/p, d=2023%p;
        //cout<<ans<<" "<<p<<" "<<d<<endl;
        
        if(d==0){
            cout<<"YES"<<endl;
            cout<<ans<<" ";
            for(int i=0; i<k-1; i++){
                cout<<"1"<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        //cout<<endl;
    }
}