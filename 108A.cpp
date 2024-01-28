#include<bits/stdc++.h>
using namespace std;
int main(){
    int hr,mnt;
    char c;

    cin>>hr>>c>>mnt;

    while(true){
        if(mnt<59){
            mnt++;
        }
        else{
            mnt=0;
            if(hr<23) hr++;
            else hr=0;
        }
        
        string hrs=to_string(hr);
        string mnts=to_string(mnt);
        if(hrs.size()==1){
          hrs='0'+hrs;
        }
        if(mnts.size()==1){
          mnts='0'+mnts;
        }
        
        if(hrs[0]==mnts[1] && hrs[1]==mnts[0]){
          cout<<hrs<<c<<mnts<<endl;
          break;
        }
    }
}