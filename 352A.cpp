#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int n5=0,n0=0;

    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==5) n5++;
        else n0++;
    }

    if(n5==n){
        cout<<"-1"<<endl;
    }
    else{
        int m=n5*5;
        while(m%9!=0){
            n5--;
            m=n5*5;
        }

        if(n5==0){
            cout<<"0"<<endl;
        }
        else{
            for(int i=0; i<n5; i++){
                cout<<"5";
            }
            for(int i=0; i<n0; i++){
                cout<<"0";
            }

            cout<<endl;
        }
    }
}