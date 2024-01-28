#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin>>v[i];
    int l,u;
    cin>>l>>u;
    bool flag=true;
    int count=n-1;
    int x=1;
    while(count--){
        int bg=0,in=0;
        for(i=0; i<x; i++){
            bg+=v[i];
        }
        for(i=x; i<n; i++){
            in+=v[i];
        }
        x++;
        
        //cout<<bg<<" "<<in<<endl;
        
        if((bg>=l && bg<=u) && (in>=l && in<=u)){
          cout<<x<<endl;
          flag=false;
          break;
        }
    }
    
    if(flag) cout<<"0"<<endl;
}