#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    string str1=s.substr(0,2), str2=s.substr(3,2);
    string ttr1=t.substr(0,2), ttr2=t.substr(3,2);
    int s1=stoi(str1), s2=stoi(str2);
    int t1=stoi(ttr1), t2=stoi(ttr2);
    
    if(t1==0 && t2==0){
      cout<<setw(2)<<setfill('0')<<s1<< ":" <<setw(2)<<setfill('0')<<s2<<endl;
    }
    else{
      int sf,tf;
      if(t1>24) t1=(t1-(24*(t1/24)));
      if(s2<t2){
        s2=s2+60;
        t1=t1+1;
      }
      if(s1==0) s1=24;
      sf=s1-t1;
      tf=s2-t2;
      cout<<setw(2)<<setfill('0')<<sf<< ":" <<setw(2)<<setfill('0')<<tf<<endl;
    }
}