#include <iostream>
using namespace std;
int main(){
	int n;
	int t = 0, s = 0, a;
	cin>>n;
	for( int i = 1 ; i <= n ; i++ ){
		cin>>a;
		s = s + a;
		if( s < 0 && a < 0) t++;
		if( s < 0 && a < 0) s = 0;
	}
	cout<<t;
}
