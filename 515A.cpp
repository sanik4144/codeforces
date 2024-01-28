#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b, s;
    cin>>a>>b>>s;
    int x=abs(a)+abs(b);
    if(s>=x && (s-x)%2==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}