#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int maxi=*max_element(a,a+n);
    int mini=*min_element(a,a+n);
    int maxI,minI;

    for(int i=0; i<n; i++){
        if(a[i]==maxi){
            maxI=i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(a[i]==mini){
            minI=i;
            break;
        }
    }

    int s=0;
    if(maxI>minI){
        s=maxI+((n-1)-minI-1);
    }
    else{
        s=maxI+((n-1)-minI);
    }

    cout<<s<<endl;
}