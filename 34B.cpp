#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],sum=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(a[i]<0 && m>0){
            sum+=a[i];
            m--;
        }
    }

    cout<<abs(sum)<<endl;
}