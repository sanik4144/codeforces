#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,X=0, pos=0;

    for(int i=0; i<n; i++){
        if(s[i]=='x') x++;
        else X++;
    }
    

    if(x>X){
        int temp=x-(n/2);
        for(int i=0; i<temp; i++){
            if(s[i]=='x'){
                s[i]='X';
                pos++;
            }
            else temp++;
        }
    }
    else if(X>x){
      int temp=X-(n/2);
      for(int i=0; i<temp; i++){
        if(s[i]=='X'){
          s[i]='x';
          pos++;
        }
        else temp++;
      }
    }
    
    cout<<pos<<endl;
    cout<<s<<endl;
}