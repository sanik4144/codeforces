#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int s=0,d=0,x=n/2;

    while(x--){
        if(v[0]>v[v.size()-1]){
            s+=v[0];
            v.erase(v.begin());
        }
        else{
            s+=v[v.size()-1];
            v.pop_back();
        }
        if(v[0]>v[v.size()-1]){
            d+=v[0];
            v.erase(v.begin());
        }
        else{
            d+=v[v.size()-1];
            v.pop_back();
        }
    }
    if(n%2!=0){
        s+=v[0];
    }
    cout<<s<<" "<<d<<endl;
}
