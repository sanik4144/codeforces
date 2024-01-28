#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int i,j,k;
    cin>>n;
    vector<int> v(n);
    bool flag=true;
    for(int i=0; i<n; i++) cin>>v[i];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(j==i) j++;
            for(k=j+1; k<n; k++){
                if(k==i && i!=n-1) k++;

                if(v[j]+v[k]==v[i]){
                    flag=false;
                    break;
                }
            }
            if(!flag) break;
        }
        if(!flag) break;
    }
    
    if(flag) cout<<"-1"<<endl;
    else cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;

}