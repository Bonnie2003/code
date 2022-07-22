#include<iostream>
#include<cmath>

using namespace std;

int a[10000] = {0};

int main(){
	int n=0, x=0, y=0;
	double m=0, total=0;
	cin >> n;
	for( int i=0; i<n; i++){
		cin >> x;
		for( int j=0; j<x; j++ ){
			cin >> a[j];
			if( j != 0 ){
				for( int k=j; k>0; k--){
					if( a[k] < a[k-1] ){
						y = a[k];
						a[k] = a[k-1];
						a[k-1] = y;
					}
					else{
						break;
					}
				}
			}
		}
/*		for( int j=0; j< x; j++ ){
			cout << a[j] << " ";
		}
		cout << endl;
*/		
		if( x%2 != 0 ){
			total = 0;
			m = a[x/2];
			
//			cout << "m: " << m << endl;
			
			for( int j=0; j<x; j++ ){
				total = total + abs( a[j] - m );
			}
			cout << total << endl;
		}
		else{
			total = 0;
			m = ( a[x/2-1] + a[x/2] ) /2 ;
			
//			cout << "a[前]: " << a[n/2] << "  a[後]: " << a[n/2 + 1] << endl; 
//			cout << "m: " << m << endl;
			
			for( int j=0; j<x; j++){
				total = total + abs( a[j] - m );
			}
			cout << total << endl;
		}
	}
	return 0;
}
