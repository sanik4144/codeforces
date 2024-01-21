#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int x=*min_element(a,a+n);
    int flag=0,index;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            flag++;
            index=i+1;
        }
        if(flag>1) break;
    }
    if(flag>1) cout<<"Still Rozdil"<<endl;
    else cout<<index<<endl;
}