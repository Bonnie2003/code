#include<iostream>

using namespace std;

int gcd( int small, int big);

int gcd( int small, int big){
	int c=0;
	c = big - (big/small)*small;
//	cout << "big:" << big << endl;
//	cout << "small:" << small << endl;
//	cout << "c:" << c << endl;
	if( c == 0 ){
		return small;
	}
	else{
		big = small;
		small = c;
		return gcd( small, big );
	}
}
	

int main(){
	int n=0, total=0, x=0;
	while( cin >> n ){
		if( n==0 ){
			break;
		}
		total=0;
		for( int i=1; i<n; i++){
			for( int j=i+1; j<=n; j++){
				x = gcd( i, j );
//				cout << "i:" << i << endl;
//				cout << "j:" << j << endl; 
//				cout << "x:" << x << endl << endl << endl;
				total = total + x;
			}
		}		
		cout << total << endl;
	}
	return 0;
}
	
