#include<iostream>

using namespace std;

int main(){
	int n=0, x=0, ma=0, mi=1100;
	int s[2000];
	cin >> n;
	for( int i=0; i<n; i++ ){
		cin >> x;
		s[x] = 1;
		if( x<mi ){
			mi = x;
		}
		if( x>ma ){
			ma = x;
		}
	}
	if( ma - mi + 1 == n ){
		cout << mi << " " << ma << " " << "yes" << endl;
	}
	else{
		cout << mi << " " << ma << " " << "no" << endl;
	}
	return 0;
}
