#include<iostream>

using namespace std;

int main(){
	int m=0, n=0, t=0, a=0;
	cin >> a;
	while( t<a ){
		cin >> m >> n;
		m = m-2;
		n = n-2;
		if( m%3 != 0 ){
			m = m/3 + 1;
		}
		else{
			m = m/3;
		}
		if( n%3 != 0 ){
			n = n/3 +1;
		}
		else{
			n = n/3;
		}
		cout << m*n << endl;
		t = t+1;
	}
	return 0;
}
