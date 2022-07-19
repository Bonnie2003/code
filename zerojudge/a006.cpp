#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a=0, b=0, c=0;
	int x1=0, x2=0;
	cin >> a >> b >>c;
	if( (b*b - 4*a*c) < 0){
		cout << "No real root" << endl;
	}
	else if( (b*b - 4*a*c) == 0 ){
		x1 = ( -1*b + sqrt(b*b - 4*a*c) ) /2/a;
		cout <<  "Two same roots x=" << x1 << endl;
	}
	else if( (b*b - 4*a*c) > 0 ){
		x1 = ( -1*b + sqrt(b*b - 4*a*c) ) /2/a;
		x2 = ( -1*b - sqrt(b*b - 4*a*c) ) /2/a;
		cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
	}
	return 0;
}
