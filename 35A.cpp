#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int ans;
    cin>>ans;

    for(int i=0; i<3; i++){
        int a,b;
        cin>>a>>b;

        if(a==ans) ans=b;
        else if(b==ans) ans=a;
    }

    cout<<ans<<endl;
}