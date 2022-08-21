#include<iostream>
#include<cmath>
#include<string>

using namespace std;

char a[1100][1100] ;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n=0, x=0, count=0;
	string b;
	cin >> n;
	getline( cin, b);
	for( int i=0; i<n; i++){
		getline( cin, b );
//		cout << "b:" << b << endl;
		count = b.length();	
//		cout << "count:" << count << endl;						
		x = sqrt( count ); 
//		cout << "count:" << count << endl;
//		cout << "x:" << x << endl;
		if( x*x != count ){
			cout << "INVALID" << endl;
		}
		else{
			count=0;
			for( int j=0; j<x; j++){
				for( int k=0; k<x; k++){
					a[j][k] = b[count];
					count = count + 1;
				}
			}
			for( int j=0; j<x; j++){
				for( int k=0; k<x; k++){
					cout << a[k][j];
				}
			}
			cout << endl; 
		} 
	} 
	return 0;
}
