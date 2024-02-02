#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    char c1=a[0][0], c2=a[0][1];
    bool flag=true;
    if(c1==c2){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<n; i++){
        if(a[i][i]!=c1){
            flag=false;
            break;
        }
        else{
            a[i][i]='1';
        }
        
        if(a[i][n-(i+1)]!=c1 && a[i][n-(i+1)]!='1'){
            flag=false;
            break;
        }
        else{
            a[i][n-(i+1)]='1';
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          if(a[i][j]!=c2 && a[i][j]!='1'){
            flag=false;
            break;
          }   
        }
    }
    
    if(flag){
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}