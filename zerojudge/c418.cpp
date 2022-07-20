#include<iostream>

using namespace std;

int main(){
	int n=0, count=1, x=0;
	cin >> n;
	while( count <= n ){
		x=1;
		while( x <= count ){
			cout << "*" ;
			x = x + 1;
		}
		cout << endl;
		count = count + 1;
	}
	return 0;
}
	
