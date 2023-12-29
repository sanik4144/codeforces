#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        long long int i,n;
        bool ans=false;
        cin>>n;
        vector<long long int> a(n);
        long long int sum=0;
        
        set<long long int> st;
        st.insert(0);

        for(i=0; i<n; i++){
            cin>>a[i];
            if(i%2==0){
                a[i]=(-1)*a[i];
            }

            sum+=a[i];
            if(st.find(sum)!=st.end()) ans=true;
            
            st.insert(sum);
        }

        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}