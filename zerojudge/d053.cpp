#include<iostream>

using namespace std;

int main(){
	int m=0, n=0;
	while(cin >> m >> n){
		if( m>n ){
			int c=0;
			c = m;
			m = n;
			n = c;
		}
		cout << (n-1) + (m-1)*n << endl;
	}
	return 0;
}
