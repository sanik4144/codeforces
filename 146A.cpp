#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=true;
    for(int i=0; i<n; i++){
        if(s[i]!='4' && s[i]!='7'){
            flag=false;
            break;
        }
    }

    if(!flag){
        cout<<"NO"<<endl;
    }
    else{
        string s1=s.substr(0,n/2), s2=s.substr(n/2, n/2);
        int sum1=0, sum2=0;
        
        for(int i=0; i<n/2; i++){
          int x = s1[i]-'0';
          int y = s2[i]-'0';
          sum1+=x;
          sum2+=y;
        }
        
        if(sum1 == sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}