#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i, sumx=0,sumy=0, sumz=0;
    cin>>n;
    int j,a[n][3];

    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
            cin>>a[i][j];
        }
    }

    for(i=0; i<n; i++){
        sumx+=a[i][0];
        sumy+=a[i][1];
        sumz+=a[i][2];
    }



    if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
