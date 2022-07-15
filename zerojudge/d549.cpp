#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double a=0, b=0, c=0;
	double d;
	while(cin >> a >> b >> c){
		d = sqrt( a*a + c*c - b*b );
		printf( "%.2f\n", d );
	}
	return 0;
}
