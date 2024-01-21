#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[8][8];
    int black=0, white=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>a[i][j];

            if(a[i][j]=='Q'){
                white+=9;
            }
            if(a[i][j]=='R'){
                white+=5;
            }
            if(a[i][j]=='B' || a[i][j]=='N'){
                white+=3;
            }
            if(a[i][j]=='P'){
                white+=1;
            }

            if(a[i][j]=='q'){
                black+=9;
            }
            if(a[i][j]=='r'){
                black+=5;
            }
            if(a[i][j]=='b' || a[i][j]=='n'){
                black+=3;
            }
            if(a[i][j]=='p'){
                black+=1;
            }
        }
    }

    if(white>black) cout<<"White"<<endl;
    else if(black>white) cout<<"Black"<<endl;
    else cout<<"Draw"<<endl;
}