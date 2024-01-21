#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> even,odd;
    for(int i=0; i<n; i++){
        cin>>v[i];

        if(v[i]%2!=0) odd.push_back(v[i]);
        else even.push_back(v[i]);
    }
    
    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());
    // for(auto u:even) cout<<u<<" ";
    // cout<<endl;
    // for(auto u:odd) cout<<u<<" ";
    // cout<<endl;
    
    long long int ans=0;
    for(auto u:even){
      ans+=u;
    }
    
    int size;
    if(odd.size()%2!=0) size=odd.size()-1;
    else size=odd.size();
    
    for(int i=0; i<size; i++){
      ans+=odd[i];
    }
    
    cout<<ans<<endl;
    
}