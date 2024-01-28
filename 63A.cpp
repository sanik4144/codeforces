#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque<pair<string,string>> q;
    deque<string> str;

    for(int i=0; i<n; i++){
        string a,b;
        cin>>a>>b;

        q.push_back({a,b});
    }


    for(auto u:q){
        if(u.second=="rat"){
            str.push_back(u.first);
        }
    }
    for(auto u:q){
        if(u.second=="woman" || u.second=="child"){
            str.push_back(u.first);
        }
    }
    for(auto u:q){
        if(u.second=="man"){
            str.push_back(u.first);
        }
    }
    for(auto u:q){
        if(u.second=="captain"){
            str.push_back(u.first);
        }
    }

    for(auto u:str) cout<<u<<endl;
}