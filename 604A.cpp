#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> x={500,1000,1500,2000,2500};
    vector<int> m(5),w(5);

    int sum=0;
    for(int i=0; i<5; i++){
        cin>>m[i];
    }
    for(int i=0; i<5; i++){
        cin>>w[i];
    }

    int hs,hu;
    cin>>hs>>hu;

    for(int i=0; i<5; i++){
        double dbl = max(3 * static_cast<double>(x[i]/10), static_cast<double>(((250 - m[i]) * (x[i] / 250)) - (50 * w[i])));
        sum += static_cast<int>(dbl);
    }
    int a=hs*100;
    int b=hu*50;
    sum=sum+a-b;
    cout<<sum<<endl;
}