#include<iostream>
using namespace std;
int main()
{
    int i,j,a[5][5];

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin>>a[i][j];
        }
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(a[i][j]==1) {
                int i1=i-2,j1=j-2;
    if(i1<0) i1=i1*(-1);
    if(j1<0) j1=j1*(-1);

    int f=i1+j1;

    cout<<f<<endl;
            }
        }
    }


}
