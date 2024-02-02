#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int a[n];
    int devu=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        devu+=a[i];
    }

    int f_devu=devu+(10*(n-1));

    if(f_devu>d){
        cout<<"-1"<<endl;
    }
    else{
        int churu=d-devu;

        cout<<churu/5<<endl;
    }
}