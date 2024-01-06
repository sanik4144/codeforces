#include<bits/stdc++.h>
using namespace std;
int main(){
   int a[5][5];
    int i,j;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            a[i][j]=1;
        }
    }

    int b[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin>>b[i][j];

            if(b[i][j]%2!=0){
                if(a[i+1][j]==0) a[i+1][j]=1;
                else a[i+1][j]=0;

                if(a[i][j+1]==0) a[i][j+1]=1;
                else a[i][j+1]=0;

                if(a[i+1][j+1]==0) a[i+1][j+1]=1;
                else a[i+1][j+1]=0;

                if(a[i+1][j+2]==0) a[i+1][j+2]=1;
                else a[i+1][j+2]=0;
                
                if((a[i+2][j+1])==0) a[i+2][j+1]=1;
                else a[i+2][j+1]=0;
            }
        }
    }

    for(i=1; i<4; i++){
        for(j=1; j<4; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}