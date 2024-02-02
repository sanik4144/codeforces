#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x,y;
    cin>>x>>y;
    if(x==1 && y==1){
        cout<<"0"<<endl;
        return 0;
    }
    a=max(x,y);
    b=min(x,y);

    int c=0;
    while(a!=0 && b!=0){
        a-=2;
        b++;
        if(a<=2){
            swap(a,b);
        }

        c++;
    }

    cout<<c<<endl;
}