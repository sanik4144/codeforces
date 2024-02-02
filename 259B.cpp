#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
    }
    int r1=0, r2=0, ir1=0, ir2=0;
    int r=1;
    for(int i=0; i<3; i++){
        r+=a[0][i];
    }

    for(int i=0; i<3; i++){
        ir1+=a[1][i];
    }
    for(int i=0; i<3; i++){
        ir2+=a[2][i];
    }
    
    int x=1,sum;
    while(1){
      r1=r-ir1;
      r2=r-ir2;
      
      sum=x+r1+r2;
      if(sum==r){
        break;
      }
      else{
        r++;
        x++;
      }
    }
    
   // cout<<x<<" "<<r1<<" "<<r2;
    a[0][0]=x;
    a[1][1]=r1;
    a[2][2]=r2;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}