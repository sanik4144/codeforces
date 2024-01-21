#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=1; i<=m; i++){
        cin>>a[i];
    }

    for(int j=1; j<=n; j++){
        for(int i=1; i<=m; i++){
            if(a[i]<=j){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}