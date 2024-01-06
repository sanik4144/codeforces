#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;

    while(1){
       y++;
       int x=y;
       
       int p=x/1000;
       x=x%1000;
       int q=x/100;
       x=x%100;
       int r=x/10;
       int s=x%10;
       
       if(p!=q && p!=r && p!=s && q!=r && q!=s && r!=s) break;
    }
    
    cout<<y<<endl;
}