#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[2*m];
    int ans=0;

    while(n--){
        int i,j;

        for(i=0;i<2*m; i++){
            cin>>a[i];
        }

        for(i=0; i<2*m; i+=2){
            if(a[i]==1 || a[i+1]==1){
                ans++;
            }
        }
    }

    cout<<ans<<endl;
}