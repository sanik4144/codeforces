#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,f[1000],r=0;

    cin>>s;

    for(i=0; i<s.size(); i++){
            if(s[0]!='a'){
                    f[0]=abs('a'-s[0]);
                    if(f[0]>13) f[0]=(26-f[0]);
            }
            else{
                f[0]=0;
            }
        f[i+1]=abs(s[i]-s[i+1]);
        if(f[i+1]>13) f[i+1]=(26-f[i+1]);
    }

    for(i=0; i<s.size(); i++){
            r+=f[i];
    }

            cout<<r<<endl;
}
