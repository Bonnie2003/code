#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double a, b, c;
	while( cin >> c >> a ){
		c = c/2; 
		a = a/2; 
		b = a*a - c*c;
		c = 3.14159265358979323846*3.14159265358979323846 * a*a *b;
		c = sqrt(c);
		printf("%.3lf\n",c);
	}
	return 0;
}



