#include<iostream>

using namespace std;

int gcd( int small, int big);

int gcd( int small, int big){
	int c=0;
	c = big - (big/small)*small;
	if( c==0 ){
		return small;
	}
	else{
		big = small;
		small = c;
		return gcd( small, big);
	}
}
	

int main(){
	long long x=0, y=0, c=0;
	int n=0;
	while( cin >> n ){
		if( n==0 ){
			break;
		}
		cin >> x;
		for( int i=1; i<n; i++){
			cin >> y;
			if( x>y ){
				c = x;
				x = y;
				y = c;
			}
			c = gcd( x, y );
//			cout << "c:" << c << endl;
			x = x*y/c;
		}
		cout << x << endl;
	}
	return 0;
}
