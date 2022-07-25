#include<iostream>
#include<cmath>

using namespace std;

int a[3100] = {0};

int main(){
	int n=0, m=0, mi=0, x=0;
	while( cin >> n){
		m=0;
		mi = 1000000;
		for( int i=0; i<n; i++){
			cin >> a[i];
			if( i>0 ){
				x = abs( a[i] - a[i-1] );
				if( m < x ){
					m = x ;
				}
				if( mi > x){
					mi = x;
				}
			}
		}
		if( mi==1 and m==n-1 ){
			cout << "Jolly" << endl;
		}
		else{
//			cout << "max: " << m << "  min: " << mi << endl;
			cout << "Not jolly" << endl;
		}
	}
	return 0;
}
