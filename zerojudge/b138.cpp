#include<iostream>

using namespace std;

int a[20] = {0};

int main(){
	int n=0, count=0;
	for( int i=0; i<10; i++){
		cin >> a[i] ;
	}
	cin >> n;
	for( int i=0; i<10; i++){
		if( a[i] <= n+30 ){
			count = count +1;
		}
	}
	cout << count << endl;
	return 0;
}
