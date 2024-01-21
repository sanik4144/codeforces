#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(12);
    for(int i=0; i<12; i++){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());

    int sum=0, c=0;
    for(int i=0; i<12; i++){
        if(sum<n){
          sum+=a[i];
          c++;
        }
        else break;
    }

    if(sum<n) cout<<"-1"<<endl;
    else{
        cout<<c<<endl;
    }
}