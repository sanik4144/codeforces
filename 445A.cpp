#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='.' && i%2==0 && j%2==0){
              cout<<"W";
            }
            else if(a[i][j]=='.' && i%2==1 && j%2==1){
              cout<<"W";
            }
            else if(a[i][j]=='.'){
              cout<<"B";
            }
            else cout<<a[i][j];
        }
        cout<<endl;
    }
}