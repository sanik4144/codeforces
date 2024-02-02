#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int t=a[0]+(n-1)+n;

    for(int i=0; i<n-1; i++){
        t+=abs(a[i]-a[i+1]);
    }

    cout<<t<<endl;
}