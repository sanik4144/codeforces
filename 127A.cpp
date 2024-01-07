#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    double a[n],b[n];

    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    double sum=0;
    for(int i=0; i<n-1; i++){
        sum+=sqrt(pow((a[i+1]-a[i]),2)+pow((b[i+1]-b[i]),2));
    }

    sum=(sum/50)*k;
    cout<<fixed << setprecision(6)<<sum<<endl;
}