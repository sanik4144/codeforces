#include<iostream>
using namespace std;
int main()
{
    int n,h,i,f=0;
    cin>>n>>h;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }

    for(i=0; i<n; i++){
        if(a[i]<=h) f++;
        else {
                if(a[i]%h!=0){
                    f+=(a[i]/h)+1;
                }
                else{
                    f+=(a[i]/h);
                }
        }
    }
    cout<<f<<endl;

}
