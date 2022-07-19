#include<iostream>

using namespace std;

int main(){
	int x=0, m=0, count=0, n=0;
	cin >> n;
	while( count < n ){
		cin >> x;
		if( x > m ){
			m = x;
		}
		count = count + 1;
	}
	cout << m << endl;
}
