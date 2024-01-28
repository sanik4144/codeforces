#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,r2, c1,c2, d1,d2;
    bool flag=true;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for(int i=1; i<10; i++){
        int x=i;
        int a=r1-x, b=c1-x, c=r2-b;

        if(a>0 && a<10 && b>0 && b<10 && c>0 && c<10){
            if(a!=b && a!=c && a!=x && b!=c && b!=x && c!=x){
              if(x+c==d1 && a+b==d2){
                cout<<x<<" "<<a<<endl;
                cout<<b<<" "<<c<<endl;
                flag=false;
                break;
              }
                
            }
        }
    }

    if(flag) cout<<"-1"<<endl;
}