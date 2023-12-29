#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, f=0,i;
    cin>>n;

    string s;
    for(i=0; i<n; i++){
        cin>>s;
        if(s[0]=='T') f+=4;
        else if(s[0]=='C') f+=6;
        else if(s[0]=='O') f+=8;
        else if(s[0]=='D') f+=12;
        else if(s[0]=='I') f+=20;
    }




    /*for(i=0; i<n; i++){
        if(s[i]=='Tetrahedron') f+=4;
        else if(s[i]=='Cube') f+=6;
        else if(s[i]=='Octahedron') f+=8;
        else if(s[i]=='Dodecahedron') f+=12;
        else if(s[i]=='Icosahedron') f+=20;
    }*/

    cout<<f<<endl;
}
