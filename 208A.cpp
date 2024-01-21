#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    string s,str;
    int flag=1;

    cin>>s;

    for(i=0;i<s.size(); i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
          i+=2;
          if(!flag){
	            str+=" ";
	        }
	        continue;
        }
        else{
            flag=0;
            str+=s[i];
        }
    }
    
    cout<<str<<endl;
}
