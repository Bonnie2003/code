#include<iostream>

using namespace std;

int main(){
	int n=0;
	cin >> n;
	if( n%2 == 0 ){
		cout << (n/2 -1)*2 +1 << endl;
	}
	else{
		cout << n-1 << endl;
	}
	return 0;
}
