#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,u=0,l=0;
    string s;
    cin>>s;

    for(i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z') u++;
        else if(s[i]>='a' && s[i]<='z') l++;
    }

    if(u>l){
        transform(s.begin(), s.end(), s.begin(), :: toupper);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), :: tolower);
    }

    cout<<s<<endl;
}
