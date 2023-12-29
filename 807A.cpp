#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    int flag=0,flag1=0;
    for(i=0; i<n; i++){
        if(a[i]!=b[i]){
            flag=0;
            break;
        }
        else flag++;
    }

    if(flag==0){
        cout<<"rated"<<endl;
    }
    else{
        for(i=0; i<n-1; i++){
            if(a[i]<a[i+1]){
                flag1=0;
                break;
            }
            else flag1++;
        }

        if(flag1==0){
            cout<<"unrated"<<endl;
        }
        else{
            cout<<"maybe"<<endl;
        }
    }
}
