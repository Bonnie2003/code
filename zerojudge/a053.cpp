#include<iostream>

using namespace std;

int main(){
	int n=0;
	cin >> n;
//	cout << n<< endl;
	if(n<=10){
		cout << 6*n << endl;
//		cout << 10 << endl;
	}
	else if( 11 <= n and n <= 20){
		cout << 6*10 + 2*(n-10) << endl;
//		cout << 20 << endl;
	}
	else if( 21 <= n and n <= 40){
		cout << 8*10 + (n-20) << endl;
//		cout << n-20 << endl;
	}
	else{
		cout << 100 << endl;
	}
	return 0;
}
