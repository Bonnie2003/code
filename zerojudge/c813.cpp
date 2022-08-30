#include<iostream>

using namespace std;

int main(){
	int n=0, total=0;
	while( cin >> n ){
		if( n==0 ){
			break;
		}
		while( true ){
			while( true ){
				total = total + n%10;
				if( n<10 ){
					break;
				}
				n = n / 10;
//				cout << "total:" << total << endl;
//				cout << "n:" << n << endl;
			}
			n = total;
			total = 0;
			if( n<10 ){
				break;
			}
		}
		cout << n << endl;
	}
	return 0;
}
