#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    a[n]=a[0];

    int mini=1000, x,y;

    for(int i=0; i<n; i++){
        v[i]=abs(a[i]-a[i+1]);
        if(v[i]<=mini){
            mini=v[i];
            x=i+1; y=i+2;
        }
    }

    if(y>n) y=1;
    cout<<x<<" "<<y<<endl;
}