#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long int v;
    cin>>n>>v;
    vector<int> sel;
    int index=1,p=0;
    while(n--){
        int x;
        cin>>x;
        vector<long long int> vec(x);
        for(int i=0; i<x; i++){
            cin>>vec[i];
        }
        for(int i=0; i<x; i++){
            if(vec[i]<v){
                sel.push_back(index);
                p++;
                break;
            }
        }
        index++;
    }
    
    cout<<p<<endl;
    for(auto u:sel) cout<<u<<" ";
}