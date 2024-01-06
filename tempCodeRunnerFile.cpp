#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> a;
    int i,j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            a[i][j]==1;
        }
    }

    vector<vector<int>> b;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin>>b[i][j];

            if(b[i][j]%2!=0){
                if(a[i+1][j]==0) a[i+1][j]=1;
                else a[i+1][j]=0;

                if(a[i-1][j]==0) a[i-1][j]=1;
                else a[i-1][j]=0;

                if(a[i][j+1]==0) a[i][j+1]=1;
                else a[i][j+1]=0;

                if(a[i][j-1]==0) a[i][j-1]=1;
                else a[i][j+1]=0;
            }
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}