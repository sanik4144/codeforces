#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i=1,r,a;
    cin>>k>>r;

    while(1){
        a=k*i;
        if(a%10==0){
            break;
        }
        else if((a-r)%10==0){
            break;
        }
        i++;
    }

    cout<<i<<endl;
}
