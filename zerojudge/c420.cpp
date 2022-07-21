#include<iostream>

using namespace std;

int main(){
	int n=0, total=0, x=0;
	cin >> n;
	total = 1 + 2*(n-1);
	for( int i=1; i<=n; i++ ){
		x = 1 + 2*(i-1);
		for( int j=0; j< (total-x)/2; j++){
			cout << "_" ;
		}
		for( int j=0; j< x; j++){
			cout << "*" ;
		}
		for( int j=0; j< (total-x)/2; j++){
			cout << "_";
		}
		cout << endl;
	}
	return 0;
}
