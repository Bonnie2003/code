#include<iostream>

using namespace std;

int main(){
	int n=0, s=0, k=0, x=0, y=0, z=0, ma=0, m=0;
	cin >> n >> s;
	k = s/1000;
	for( int i=0; i<n; i++ ){
		cin >> x >> y;
		if( 0<=y and y<=29 ){
			z = x + 10*k;
		}
		else if( 30<=y and y<=39 ){
			z = x + 50*k;
		}
		else{
			z = x + 100*k;
		}
		if( z > ma ){
			ma = z;
			m = i+1;
		}
	}
	cout << m << " " << ma << endl;
	return 0;
}
	
