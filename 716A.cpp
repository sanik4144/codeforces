#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;

    stack<int> st;
    int x;
    cin>>x;
    st.push(x);
    for(int i=1; i<n; i++){
        int x;
        cin>>x;
        if(x-st.top()>c){
            while(!st.empty()){
                st.pop();
            }
        }
        st.push(x);
    }

    cout<<st.size()<<endl;
}