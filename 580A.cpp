#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int c=1,ans=1;
    for(int i=0; i<n-1; i++){
        if(v[i]<=v[i+1]){
            c++;
            ans=max(ans,c);
        }
        else c=1;
    }

    cout<<ans<<endl;
}