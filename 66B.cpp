#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque<int> v;
    int max=0;
    
    for(int i=0; i<n; i++){
      int x;
      cin>>x;
      v.push_back(x);
    }
    v.push_front(1001);
    v.push_back(1001);


    for(int i=1; i<=n; i++){
        int l=0,r=0;
        int j=i;
        while(v[j]>=v[j+1]){
          r++;
          j++;
        }
        int k=i;
        while(v[k]>=v[k-1]){
          l++;
          k--;
        }
//cout<<l<<" "<<r<<endl;
        if(l+r+1>max){
          max=l+r+1;
        }
    }
    
    cout<<max<<endl;
}