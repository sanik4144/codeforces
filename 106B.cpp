#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n),d(n);

    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]<a[j] && b[i]<b[j] && c[i]<c[j]){
                d[i]=1001;
            }
        }
    }

    int mini= min_element(d.begin(),d.end())-d.begin();

    cout<<mini+1<<endl;
}