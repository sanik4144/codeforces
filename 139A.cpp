#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[7];
    deque<pair<int,int>> q;

    for(int i=0; i<7; i++){
        cin>>a[i];
        q.push_back({i+1,a[i]});
    }

    int x,y,sum=0;
    while(true){
        x=q.front().second;
        y=q.front().first;
        q.pop_front();
        q.push_back({y,x});
        sum+=x;

        if(sum>=n) break;
    }

    cout<<y<<endl;
}