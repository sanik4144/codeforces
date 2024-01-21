#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int i,n=s.size(),j;
    string str;
    for(i=0; i<n; i++){
        if(s[i]=='h'){
            str+=s[i];
            j=i+1;
            break;
        }
    }
    for(i=j; i<n; i++){
        if(s[i]=='e'){
            str+=s[i];
            j=i+1;
            break;
        }
    }
    
    for(i=j; i<n; i++){
        if(s[i]=='l'){
            str+=s[i];
            j=i+1;
            break;
        }
    }
    for(i=j; i<n; i++){
        if(s[i]=='l'){
            str+=s[i];
            j=i+1;
            break;
        }
    }
    for(i=j; i<n; i++){
        if(s[i]=='o'){
            str+=s[i];
            j=i+1;
            break;
        }
    }

    if(str=="hello") cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}