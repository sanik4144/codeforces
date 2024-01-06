#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],f[n];
    int cap=0;

    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
        cap=cap-a[i]+b[i];
        f[i]=cap;
    }

    cout<<*max_element(f,f+n)<<endl;
}