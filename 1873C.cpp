#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,ans=0;
        
            string s;
            cin>>s;

            for(i=0; i<10; i++){
                if(s[i]=='X'){
                    ans+=1;
                }
            }

            cin>>s;
            for(i=0; i<10; i++){
                if(s[i]=='X'){
                    if(i==0 || i==9){
                        ans+=1;
                    }
                    else{
                        ans+=2;
                    }
                }
            }

            cin>>s;
            for(i=0; i<10; i++){
                if(s[i]=='X'){
                    if(i==0 || i==9){
                        ans+=1;
                    }
                    else if(i==1 || i==8){
                        ans+=2;
                    }
                    else{
                        ans+=3;
                    }
                }
            }

            cin>>s;
            for(i=0; i<10; i++){
                if(s[i]=='X'){
                    if(i==0 || i==9){
                        ans+=1;
                    }
                    else if(i==1 || i==8){
                        ans+=2;
                    }
                    else if(i==2 || i==7){
                        ans+=3;
                    }
                    else{
                        ans+=4;
                    }
                }
            }

            cin>>s;
            for(i=0; i<10; i++){
                if(s[i]=='X'){
                    if(i==0 || i==9){
                        ans+=1;
                    }
                    else if(i==1 || i==8){
                        ans+=2;
                    }
                    else if(i==2 || i==7){
                        ans+=3;
                    }
                    else if(i==3 || i==6){
                        ans+=4;
                    }
                    else{
                        ans+=5;
                    }
                }
            }

             cin>>s;
            for(i=0; i<10; i++){
                if(s[i]=='X'){
                    if(i==0 || i==9){
                        ans+=1;
                    }
                    else if(i==1 || i==8){
                        ans+=2;
                    }
                    else if(i==2 || i==7){
                        ans+=3;
                    }
                    else if(i==3 || i==6){
                        ans+=4;
                    }
                    else{
                        ans+=5;
                    }
                }
            }
            
            cin>>s;
            for(i=0; i<10; i++){
                if(s[i]=='X'){
                    if(i==0 || i==9){
                        ans+=1;
                    }
                    else if(i==1 || i==8){
                        ans+=2;
                    }
                    else if(i==2 || i==7){
                        ans+=3;
                    }
                    else{
                        ans+=4;
                    }
                }
            }

            cin>>s;
            for(i=0; i<10; i++){
                if(s[i]=='X'){
                    if(i==0 || i==9){
                        ans+=1;
                    }
                    else if(i==1 || i==8){
                        ans+=2;
                    }
                    else{
                        ans+=3;
                    }
                }
            }

            cin>>s;
            for(i=0; i<10; i++){
                if(s[i]=='X'){
                    if(i==0 || i==9){
                        ans+=1;
                    }
                    else{
                        ans+=2;
                    }
                }
            }

            cin>>s;
            for(i=0; i<10; i++){
                if(s[i]=='X'){
                    ans+=1;
                }
            }

        cout<<ans<<endl;
    }
}