#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    map<string,int> cnt;

    for(int i=0; i<n; i++){
      string s;
      cin>>s;

      if(cnt[s]==0){
        cout<<"OK"<<endl;
        cnt[s]++;
      }
      else{
        int tmp = cnt[s];
            cnt[s]++;
            string newKey = s + to_string(tmp); // Create a new key by appending the count to the original string
            cnt[newKey]++; // Increase count for the new key
            cout << newKey << endl;
      }
    }


}
