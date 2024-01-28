#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    
    queue<int> q;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    q.push(101);
    
    int ans=-1;
    while(!q.empty()){
        int x=m;
        while(true){
                x=x-q.front();
                q.pop();
                if(q.front()>x) break;
        }

        ans++;
    }

    cout<<ans<<endl;
}