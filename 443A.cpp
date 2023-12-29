#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,d=0,n;
    string s;

    //cin>>s;

    getline(cin,s);
    n=s.size();

    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            if(s[i]==s[j]) {
                    break;
            }
        }
            if(i==j) {
                    d++;
        }
    }
    cout<<d<<endl;
}
