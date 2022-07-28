#include<iostream>

using namespace std;

int a[15010] = {0};

int main(){
	int L=0, H=0, R=0, ma=0, mi=1000, hight=0;
	while( cin >> L >> H >> R ){
		if( R > ma ){
			ma = R;
		}
		if( L < mi ){
			mi = L;
		}
		for(int i=L; i<R; i++){
			if( a[i] < H ){
				a[i] = H;
			}
		}
	}
	
/*	for( int i=mi; i<ma; i++){
		cout << a[i] << " " ;
	}
	cout << endl;
*/	
	hight = a[mi];
	cout << mi << " " << a[mi] << " ";
	for( int i=mi+1; i<ma; i++){
		if( a[i] != hight ){
			cout << i << " " << a[i] << " ";
			hight = a[i];
		}
	}
	cout << ma << " " << 0;
	cout << endl;
	return 0;
}
