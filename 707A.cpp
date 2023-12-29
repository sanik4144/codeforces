#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    char c[n][m];

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>c[i][j];
        }
    }

    int flag=0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(c[i][j]=='C' || c[i][j]=='Y' || c[i][j]=='M'){
               flag=0;
               break;
            }
            else flag++;
        }
        if(flag==0) break;
    }

    if(flag==0) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}
