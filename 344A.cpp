#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    int c=0;
    for(i=0; i<n; i++){
        cin>>a[i];
        if(a[i]!=a[i-1]){
            c++;
        }
    }
    cout<<c<<endl;
}
