#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string s;

    cin>>n;
    while(n--){
        cin>>s;
        if(s.size()>10){
            i=s.size()-2;
            cout<<s[0]<<i<<s[s.size()-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}
