#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
    }

    int mini=*min_element(a,a+n);
    int maxi=*max_element(a,a+n);

    for(int i=0; i<n; i++){
        if(b[i]==mini || b[i]==maxi){
            swap(b[0],b[i]);
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
      if(c[i]==mini || c[i]==maxi){
        swap(c[n-1],c[i]);
        break;
      }
    }
    int d1,d2;

    for(int i=1; i<n; i++){
      if(b[i]==mini || b[i]==maxi){
        d1=i;
        break;
      }
    }

    for(int i=n-2; i>=0; i--){
      if(c[i]==mini || c[i]==maxi){
        d2=n-(i+1);
        break;
      }
    }
    cout<<max(d1,d2)<<endl;
}