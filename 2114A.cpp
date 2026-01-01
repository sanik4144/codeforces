#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;

        double rt = sqrt(n);
        
        if(rt == (int)rt){
            cout<<"0"<<" "<<rt<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}