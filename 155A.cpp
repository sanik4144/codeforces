#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int amz=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        int maxi=*max_element(a,a+i);
        int mini=*min_element(a,a+i);
        

        if(a[i]>maxi || a[i]<mini){
            amz++;
        }
    }

    cout<<amz<<endl;
}