#include<iostream>

using namespace std;

int main(){
	char c;
	long long total=0;
	while( cin >> c ){
		if( 'c' == '-' ){
			total = 0;
		}
		else{
			total = c-48;
		}
		while( ( c=getchar() ) != '\n' ){
			total = total + (c-48);
		}
		if( total % 3 == 0 ){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}
