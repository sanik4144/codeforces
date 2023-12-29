#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n][3];

    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
            cin>>a[i][j];
        }
    }
    int o=0,f=0;

    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
            if(a[i][j]==1) o++;
        }
            if(o>1) {f++;}
            o=0;
    }

    cout<<f<<endl;


}
