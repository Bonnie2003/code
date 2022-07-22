#include<iostream>
#include<algorithm>

using namespace std;

int a[100000] = {0};

int main(){
	int T=0, n=0;
	cin >> T;
	for( int i=0; i<T; i++){
		cin >> n;
		for( int j=0; j<n; j++ ){
			cin >> a[j];
		}
		sort( a, a+n);
		if( n%2 == 0 ){
			cout << a[n/2 - 1] << endl;
		}
		else{
			cout << a[n/2] << endl;
		}
	}
	return 0;
}
	
