#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &p1, const pair<int,int> &p2)
{
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    return 0;
}
int main()
{
    int n,k;

    cin>>n>>k;
    k=k-1;
    vector<pair<int,int>> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(), cmp);
    int c=0;
    for(int i=0; i<n; i++){
        if(v[i].first==v[k].first && v[i].second==v[k].second){
            c++;
        }
    }

    cout<<c<<endl;
}
