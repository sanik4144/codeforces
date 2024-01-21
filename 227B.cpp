#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    b=a;
    reverse(b.begin(),b.end());
    

    int q, x=0,y=0;
    cin>>q;
    while(q--){
      int w;
      cin>>w;
      for(int i=0; i<n; i++){
        if(a[i]==w){
          x+=(i+1);
        }
      }
      for(int i=0; i<n; i++){
        if(b[i]==w){
          y+=(i+1);
        }
      }
    }

    cout<<x<<" "<<y<<endl;
}