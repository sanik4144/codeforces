#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int p=n;
    
    deque<int> q,r;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        q.push_back(x);
        r.push_back(x);
    }

    sort(q.rbegin(),q.rend());
    int sum1=0;
    while(n--){
        sum1+=q.front();
        //cout<<q.front()<<" ";
        int x=q.front()-1;
        q.pop_front();

        if(x>=q.front()){
            q.push_front(x);
        }
        else{
            q.push_back(x);
        }
        sort(q.rbegin(),q.rend());
    }
    
    sort(r.begin(),r.end());
    int sum2=0;
    while(p--){
      sum2+=r.front();
      
      int x=r.front()-1;
      r.pop_front();
      
      if(x!=0){
        r.push_front(x);
      }
    }
    
    cout<<sum1<<" "<<sum2<<endl;

}