#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int i;
        string s;
        cin>>s;
        string a="",b="";
        a+=s[0];
        bool flag=false;

        for(i=1; i<s.size(); i++){
            if(s[i]!='0' || flag){
                b+=s[i];
                flag=true;
            }
            else a+=s[i];
        }
        if(b.size()==0) b+='0';
        long long int n1=stoi(a);
        long long int n2=stoi(b);
        
        if(n2>n1 && n1!=0 && n2!=0){
          cout<<n1<<" "<<n2<<endl;
        }
        else{
          cout<<"-1"<<endl;
        }

    }
}