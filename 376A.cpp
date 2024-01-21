#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long int left=0, right=0;
    long long int k,i=0,j;
    for(k=0; k<s.size(); k++){
      if(s[k]=='^') break;
    }

    while(s[i]!='^'){
        if(s[i]>='1' && s[i]<='9'){
            long long int x=(k-i)*(s[i]-'0');

            left+=x;
        }
        i++;
        j=i+1;
    }
    
    for(j; j<s.size(); j++){
      if(s[j]>='1' && s[j]<='9'){
            long long int x=(j-k)*(s[j]-'0');

            right+=x;
        }
    }
    
    if(left>right) cout<<"left"<<endl;
    else if(right>left) cout<<"right"<<endl;
    else cout<<"balance"<<endl;
}
