#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char c;
    for(int i=0; i<n; i++){
        if(i%4==0) c='a';
        cout<<c;
        c++;
    }
}