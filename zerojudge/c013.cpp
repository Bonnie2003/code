#include<iostream>

using namespace std;

int main(){
	int n=0, x=0, y=0;
	cin >> n;
	for( int i=1; i<=n; i++){
		cin >> x >> y;
		for( int m=0; m<y; m++){
			for( int j=1; j<=x; j++){
				for( int k=1; k<=j; k++){
					cout << j;
				}
				cout << endl;
				
			}
			for( int j=x-1; j>=1; j-- ){
				for( int k=1; k<=j; k++){
					cout << j;
				}
				cout << endl;
			}
			cout << endl;
		}
	}
	return 0;
}
