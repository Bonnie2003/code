#include<iostream>

using namespace std;

int main(){
	int n=0, M=0, F=0, count=0;
	char c;
	cin >> n;
	c = getchar();
	for( int i=0; i<n; i++){
		M=0;
		F=0;
		count=0;
		while( c = getchar() ){
//			cout << "c:" << c << endl;
			if( c == '\n' ){
//				cout << "換行" << endl; 
				break;
			}
			else if( c == ' ' ){
//				cout << "空白" << endl; 
				count = 1;
				continue;
			}
			else{
				if( c == 'M' ){
					M = M + 1;
//					cout << M << endl;
				}
				else{
					F = F + 1;
//					cout << F << endl;
				}
			}
		}
		if( M == F and count == 1){
			cout << "LOOP" << endl;
		}
		else{
			cout << "NO LOOP" << endl;
		}
	}
	return 0;
}
