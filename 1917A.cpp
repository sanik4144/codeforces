#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }

        bool flag=false;
        int neg=0;
        for(int i=1; i<=n; i++){
            if(a[i]==0){
                flag=true;
                break;
            }
            else if(a[i]<0){
                neg++;
            }
        }
        if(neg%2!=0) flag=true;

        if(flag){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
            cout<<"1 0"<<endl;
        }
    }
}