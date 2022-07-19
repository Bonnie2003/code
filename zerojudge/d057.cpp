#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int x1=0, y1=0, x2=0, y2=0;
	int a=0, b=0;
	while( cin >> x1 >> y1 >> x2 >> y2){
		if(x1 == 0){
			if(x2==0 ){
				if(y1==0){
					if(y2==0){
						break;
					}
				}
			}
		}
		
		a = abs( x1 - x2 );
		b = abs( y1 - y2 );
		if( a == 0 ){
			if( b==0 ){
				cout << 0 << endl;
			}
			else{
				cout << 1 << endl;
			}
		}
		else if( b==0 ){
			cout << 1 << endl;
		}
		else if( a == b ){
			cout << 1 << endl;
		}
		else if( a > b){
			cout << 2 << endl;
		}
		else{
			cout << 2 << endl;
		}
	}
	return 0;
}	
		
