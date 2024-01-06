#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    int z1=0,o1=0,z2=0,o2=0;
    for(int i=0; i<n; i++){
        if(a[i]==0) z1++;
        else o1++;

        if(b[i]==0) z2++;
        else o2++;
    }
    int x1=min(o1,z1), x2=min(z2,o2);
    cout<<x1+x2<<endl;
}