#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,x1,n=0,i,m;

    cin>>x;
    x1=x;

    while(x){
        x=x/10;
        n++;
    }

    while(1){
        if(x1%n==0){
            m=x1/n;
            if(m%11==0){
                cout<<x1;
                break;
            }
        }
            x1--;
    }
}
