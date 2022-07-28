#include<iostream>

using namespace std;

int a[37] = {0,2,4,0,0,1,3,5,0,2,6,0,0,1,5,7,0,2,4,6,8,3,5,9,0,4,8,0,0,5,7,9,0,6,8,0,0};
int b[5] = {0};


int main(){
	int n=0, x=0, y=0, z=0, num=0, E=0; 
	cin >> n;
	for( int j=0; j<n; j++){
		cin >> x >> y >> z;
		num=1;
		for( int i=4*(x-1)+1; i<=4*x; i++){
			b[num] = a[i];
			num = num + 1;
		}
		
/*		for( int i=1; i<=4; i++){
			cout << b[i] << " ";
		}
		cout << endl << endl;
*/		
		num=1;
		for( int i=4*(y-1)+1; i<=4*y; i++){
			if( num > 4 ){
				break;
			}
			else{
				if( a[i] > b[num] ){
					while( a[i] > b[num] ){
						num = num + 1;
						if( num > 4 ){
							break;
						}
					}
				}
				if( num > 4 ){
					break;
				}
				if( a[i] == b[num] ){
					b[num] = 0;
					num = num + 1;
				}
			}
		}
//		cout << "num:  " << num << endl;
		
/*		for( int i=1; i<=4; i++ ){
			cout << b[i] << " ";
		}
		cout << endl << endl << endl;
*/		
		num=1;
		for( int i=4*(z-1)+1; i<=4*z; i++){
			if( num > 4 ){
				break;
			}
			else{
				if( a[i] > b[num] ){
					while( a[i] > b[num] ){
						num = num + 1;
//						cout << " num > 4 " << endl;
						if( num > 4 ){
							break;
						}
					}
				}
				if( num > 4 ){
					break;
				}
				if( a[i] == b[num] ){
					b[num] = 0;
//					cout << "num: " << num << endl;
					num = num + 1;
				}
			}
		}
//		cout << "num:  " << num << endl;
		
/*		for( int i=1; i<=4; i++ ){
			cout << b[i] << " ";
		}
		cout << endl << endl << endl;
*/		
		E=0;
		for( int i=1; i<=4; i++){
			if( b[i] != 0 ){
				cout << b[i] << " ";
				E = 1;
			}
		}
		if( E == 0 ){
			cout << "Empty" << endl;
		}
		cout << endl;
	}
	return 0;
}
