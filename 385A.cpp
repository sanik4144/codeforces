#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int ans=0,temp=0;
    for(int i=0; i<n-1; i++){
        int x=a[i]-a[i+1];
        if(x>0){
            temp=(a[i]-a[i+1]-c);
            if(temp>ans) ans=temp;
        }
    }

    cout<<ans<<endl;
}