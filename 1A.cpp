#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;

    cin>>n>>m>>a;


    long long p=ceil(double(n)/double(a));
    long long q=ceil(double(m)/double(a));

    cout<<p*q<<endl;
}
