#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int ps1=(k*l)/nl;
    int ps2=c*d;
    int ps3=p/np;

    int fs=min(ps1,min(ps2,ps3));

    cout<<fs/n<<endl;
}