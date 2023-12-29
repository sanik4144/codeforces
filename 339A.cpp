#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int i;

    sort(s.begin(), s.end());
    for(i=0; i<s.size()-1; i++){
            if(s[i]!='+'){
                cout<<s[i]<<"+";
            }
    }
    cout<<s[s.size()-1]<<endl;
}
