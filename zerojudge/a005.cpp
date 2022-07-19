#include<iostream>

using namespace std;

int main(){
	unsigned int x=0, total=0;
	unsigned int a=0, b=0, c=0, d=0;
	cin >> x;
	while( total<x ){
		cin >> a >> b >> c >> d;
		if( b-a == c-b ){
			cout << a << " " << b << " " << c << " " << d << " " << d + (b-a) << endl;
		}
		else{
			cout <<  a << " " << b << " " << c << " " << d << " " << d * (b/a) << endl;
		}
		total = total + 1;
	}
	return 0;
}
