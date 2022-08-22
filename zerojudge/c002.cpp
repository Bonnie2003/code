#include<iostream>

using namespace std;

int a[1000010] = {0};

int main(){
	int n=0;	
	while( cin >> n ){
		if( n == 0 ){
			break;
		}
		if( n<=100 ){
			cout << "f91(" << n << ") = 91" << endl;
		}
		else{
			cout << "f91(" << n << ") = " << n-10 << endl;
		}
	}
	return 0;
}	
