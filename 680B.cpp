#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>n>>a;
    int i,ar[n];
    int tot=0;
    for(i=0; i<n; i++){
        cin>>ar[i];
        if(ar[i]==1) tot++;
    }

    int sub=0,x=min(a,n-a)-1;
    int d=1;
    while(x>=0){
        if((ar[a-d-1]==1 && ar[a+d-1]==0)){
            sub++;
        }
        else if((ar[a-d-1]==0 && ar[a+d-1]==1)){
          sub++;
        }
        d++;
        
        x--;
    }

    int ans=tot-sub;
    
    
    cout<<ans<<endl;
}