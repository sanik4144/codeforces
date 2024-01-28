#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, b,p;
    cin>>n>>b>>p;

    int n1=0,n2=0;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1) n1++;
        else n2++;
    }

    int ans=0;
    if(n1>=b){  
        ans=n1-b;
    }
    else{
        p+=(b-n1);
    }

    if(n2>=p){
        ans+=(n2-p);
    }

    cout<<ans<<endl;
}