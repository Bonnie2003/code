#include<iostream>

using namespace std;

int main(){
	int a=0, b=0, x=0, y=0;
	cin >> a >> b;
	x = max(a,b);
	y = min(a,b);
	while(true){
		if( x%y == 0 ){
			cout << y << endl;
			break;
		}
		else{
			x = x%y;
		}
		if( y%x == 0 ){
			cout << x << endl;
			break;
		}
		else{
			y = y%x;
		}
	}
	return 0;
}
		
