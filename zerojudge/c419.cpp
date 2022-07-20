#include<iostream>

using namespace std;

int main(){
	int n=0, count=1, num=1, x=0;
	cin >> n;
	while( count <= n ){
		x=1;
		num = 1;
		while( num <= n ){
			if( (n-count) - num >= 0 ){
				cout << "_";
			}
			else{
				cout << "*";
			}
			num = num + 1;
		}
		cout << endl;
		count = count + 1;
		x = x + 1;
	}
	return 0;
}
