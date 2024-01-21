#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++){
            cin>>a[i]>>b[i];
        }

        sort(a,a+n);
        sort(b,b+n);
        bool flag=true;

        if(a[0]<0 && a[n-1]>0){
            if(b[0]<0 && b[n-1]>0){
                flag=false;
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}