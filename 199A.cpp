#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    if(n==2){
        cout<<"0 "<<"1 "<<"1"<<endl;
    }
    else if(n==0){
        cout<<"0 "<<"0 "<<"0"<<endl;;
    }
    else if(n==1){
        cout<<"0 "<<"0 "<<"1"<<endl;;
    }
    else{
        vector<long long int> v;

        long long int a = 0, b = 1, c;

        while (a <= n) {
            v.push_back(a);
            c = a + b;
            a = b;
            b = c;
        }
            cout << v[v.size()-5] << " "<<v[v.size()-4]<<" "<<v[v.size()-2];
    }
}
