#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	long long int a=0, b=0, c=0, m=0, total=0, n=0, middle=0;
	while(cin >> a >> b >> c){
		total = a + b + c;
		m = max( {a,b,c} );
		n = min( {a,b,c} );
		middle = total - m - n;
		if( m > (total-m) ){
			if( m == a ){
				cout << "A" << endl;
			}
			else if( m == b ){
				cout << "B" << endl;
			}
			else {
				cout << "C" << endl;
			}
		}
		else{
			if( middle == a ){
				cout << "A" << endl;
			}
			else if( middle == b ){
				cout << "B" << endl;
			}
			else {
				cout << "C" << endl;
			}
		}
	}
	return 0;
}
		
		
	
