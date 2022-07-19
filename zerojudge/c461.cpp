#include<iostream>

using namespace std;

int main(){
	int x=0, y=0, z=0;
	cin >> x >> y >> z;
	if( x==0 ){
		if( y==0 ){
			if( z==0 ){
				cout << "AND" << endl << "OR" << endl << "XOR" << endl;
			}
			else{
				cout << "IMPOSSIBLE" << endl;
			}
		}
		else{
			if( z==0 ){
				cout << "AND" << endl;
			}
			else{
				cout << "OR" << endl << "XOR" << endl;
			}
		}
	}
	else{
		if( y==0 ){
			if( z==0 ){
				cout << "AND" << endl;
			}
			else{
				cout << "OR" << endl << "XOR" << endl;
			}
		}
		else{
			if( z==0 ){
				cout << "XOR" << endl;
			}
			else{
				cout << "AND" << endl << "OR" << endl;
			}
		}
	}
	return 0;
}
