#include<iostream>
#include<string.h>
//#include<stdio.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;

    int n=strcmpi(s1.c_str(),s2.c_str());

    if(n<0) cout<<"-1"<<endl;
    else if(n>0) cout<<"1"<<endl;
    else cout<<"0"<<endl;
}


