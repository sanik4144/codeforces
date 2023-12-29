#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,i,f=0;
    cin>>n>>x;
    int a[n];
    char s[n];

    for(i=0; i<n; i++){
        cin>>s[i]>>a[i];

        if(s[i]=='+'){
            x+=a[i];
        }
        else if(s[i]=='-'){
            if(x>=a[i]){
                x-=a[i];
            }
            else {
                f++;
                continue;
        }
    }
    }
    cout<<x<<" "<<f<<endl;

}
