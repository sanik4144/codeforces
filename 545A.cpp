#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int a;
    int ans=0;

    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=0; j<n; j++){
            cin>>a;
            if(a==1 || a==3){
                flag = false;
            }
        }
        if(flag){
            ans++;
            v.push_back(i+1);
        }
    }

    cout<<ans<<endl;
    for(auto u:v) cout<<u<<" ";

}