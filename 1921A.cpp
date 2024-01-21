#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>> v;

        for(int i=0; i<4; i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        int x1,y1,x2,y2;

        for(int i=1; i<4; i++){
            if(v[0].first==v[i].first){
                x1=v[0].first;
                y1=v[0].second;

                x2=v[i].first;
                y2=v[i].second;

                break;
            }
        }
        
        
        int ans=pow((x1-x2),2)+pow((y1-y2),2);
        
        cout<<ans<<endl;
    }
}