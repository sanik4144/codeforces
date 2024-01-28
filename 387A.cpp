#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    string str1=s.substr(0,2), str2=s.substr(3,2);
    string ttr1=t.substr(0,2), ttr2=t.substr(3,2);
    int s1=stoi(str1), s2=stoi(str2);
    int t1=stoi(ttr1), t2=stoi(ttr2);
        
    int now_time=s1*60 + s2;
    int sleep_time =t1*60 + t2;
    
    int t_time=now_time-sleep_time;
    if(t_time<0){
      t_time=(24*60)+t_time;
    }
    int now_hr=t_time/60;
    int now_mnt=t_time%60;
    
    cout<<setw(2)<<setfill('0')<<now_hr<< ":" <<setw(2)<<setfill('0')<<now_mnt<<endl;
}