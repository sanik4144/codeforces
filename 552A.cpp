#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n--){
        int x1,y1, x2,y2;
        cin>>x1>>y1>>x2>>y2;

        sum+=(x2-x1+1)*(y2-y1+1);
    }

    cout<<sum<<endl;
}