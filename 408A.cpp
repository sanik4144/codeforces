#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int ans=0, arr[n],k=0;;
    for(int i=0; i<n; i++){
        ans=0;
        int b[a[i]];
        for(int j=0; j<a[i]; j++){
            cin>>b[j];
            ans+=(b[j]*5);
        }
        ans+=(15*a[i]);

        
        arr[k]=ans;
        k++;
    }
    
    cout<<*min_element(arr,arr+n)<<endl;
}