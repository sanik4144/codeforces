#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,p=0,mp=0;
    cin>>n>>m;

    if(m==2){
        mp=0;
    }
    else if(m==1){
         mp=1;
        }
    else{
        for(i=2; i<n; i++){
            if(m%i==0) mp++;
        }
    }

    
    if(mp!=0){
        cout<<"NO"<<endl;
    }
    else if(n==2 && m==3){
        cout<<"YES"<<endl;
    }

    else{
        for(j=n+1; j<m; j++){
            p=0;
            if(j==2){
                p=0;
            }
            else if(j==1){
                p=1;
            }
            else{
                for(i=2; i<n; i++){
                    if(j%i==0) p++;
                }
            }

            if(p==0) break;
        }

        if(p==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
