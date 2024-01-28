#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;

    if(n > 1 && k == 0) {
        cout<<"No solution"<<endl;
    }
    else{
        cout<<k;
        if(n == 1) return 0;
        for(int i = 0; i < n-1; i++) cout<<"0";
    }
}