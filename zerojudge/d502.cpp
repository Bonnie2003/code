	#include<iostream>
	
	using namespace std;
	
	int main(){
		int a=0, b=0, c=0, d=0;
		int total=0;
		while(cin >> a >> b >> c >> d){
			total = c + d;
			if( a <= 37*c ){
				if( b%8 == 0 ){
					cout << total + b/8 << endl;
				}
				else{
					cout << total + b/8 +1 << endl;
				}
			}
			else{
				int x=0;
				x = (a-37*c)%64;
				if( b%8 == 0 ){
					if( x == 0 ){
						cout << total + b/8 + x << endl;
					}
					else{
						cout << total + b/8 + x +1 << endl;
					}
				}
				else{
					int y=0;
					y = 8 - b%8;
					if( x<=y ){
						cout << total + b/8;
					}
					else{
						if( (x-y)%64 == 0){
							cout << total + b/8 + (x-y)/64 << endl;
						}
						else{
							cout << total + b/8 + (x-y)/64 + 1 << endl;
						}
					}
				}
			}
		}
		return 0;
	}
