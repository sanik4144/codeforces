#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string a,b,c;
        cin>>n>>a>>b>>c;
        bool flag=false;
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){
                if(a[i]!=c[i] && b[i]!=c[i]){
                    flag=true;
                }
                else{
                  flag=false;
                }
            }
            else if(a[i]==b[i]) flag=true;
            else{
                flag=false;
                break;
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}