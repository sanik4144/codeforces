#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int mini,maxi,i;

    for(i=0; i<n; i++){
        if(i==0){
            mini=abs(a[i]-a[i+1]);
            maxi=abs(a[i]-a[n-1]);
        }
        else if(i==n-1){
            mini=abs(a[i]-a[i-1]);
            maxi=abs(a[i]-a[0]);
        }
        else{
            mini= min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
            maxi=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
        }

        cout<<mini<<" "<<maxi<<endl;
    }
}