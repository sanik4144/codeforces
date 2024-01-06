#include<bits/stdc++.h>
using namespace std;
void swp(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=1; i<=n; i++){
        a[i]=i;
    }
    if(n%2!=0){
        cout<<"-1"<<endl;
    }
    else{
        for(int i=1; i<=n; i+=2){
            swp(a[i],a[i+1]);
        }

        for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }
    }
}