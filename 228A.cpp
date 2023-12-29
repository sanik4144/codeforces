#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[4],f=0;

    for(i=0; i<4; i++){
        cin>>a[i];
    }

    for(i=0; i<4; i++){
        for(j=0; j<i; j++){
            if(a[i]==a[j]){
                break;
            }
        }
        if(i==j){
            f++;
        }
    }

    cout<<4-f<<endl;
}
