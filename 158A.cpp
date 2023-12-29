#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k,num=0;

    cin>>n>>k;

    int a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    int c=a[k-1];

        for(i=0; i<n; i++){
            if(a[i]>=c)
                if(a[i]!=0){
                   num++;
            }
        }

        cout<<num<<endl;
}
