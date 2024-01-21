#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++) cin>>a[i];

    sort(a,a+m);

    int mini=INT16_MAX;
    for(int i=0; i<=(m-n); i++){
        int x=a[i+(n-1)]-a[i];
        if(x<mini) mini=x;
    }

    cout<<mini<<endl;
}