#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m, n1=0,n0=0;
    cin>>n>>m;

    while(n--){
        int x;
        cin>>x;

        if(x==1) n1++;
        else n0++;
    }

    int temp=min(n0,n1)*2;

    while(m--){
        int a,b;
        cin>>a>>b;

        cout<<((b - a) % 2 == 1 && b - a < temp ? "1\n" : "0\n");
    }
}