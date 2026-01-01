#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;

        string s;
        cin>>s;
        int one = 0, zero = 0, tot = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '1') one++;
            else zero++;
        }
        tot = (one/2) + (zero/2);
        if(m>tot || m==0) cout<<"No"<<endl;
        else{
            if(tot%2 == 0 && m%2==0){
                cout<<"Yes"<<endl;
            }
            else if(tot%2 == 1 && m%2==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}