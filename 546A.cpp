#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,w,d,k,x,p=0;
    cin>>k>>n>>w;

    for(i=1; i<=w; i++){
        p+=k*i;
    }

    if(p<=n){
        cout<<"0"<<endl;
    }
    else{
        cout<<p-n<<endl;
    }
}