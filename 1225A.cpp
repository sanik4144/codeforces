#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        char c='a';
        string str="";
        for(int i=0; i<k; i++){
            str+=c;
            c++;
        }
        
        for(int i=0; i<n; i++){
          cout<<str;
        }
        cout<<endl;
    }
}