#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i]=a[i];
    }

    sort(a,a+n, greater<int>());
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    pair<int,int> p;
    int x=1;
    cout<<x<<" ";
    for(int i=1; i<n; i++){
        
        cout<<x<<" ";
        if(a[i]!=a[i+1]){
            x=i+1;
        }
    }
}