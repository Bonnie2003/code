#include<iostream>

using namespace std;

int a[100000] = {0};

int main(){
	int L=0, M=0, total=0, x=0, y=0, ma=0, mi=10000, count =0;
	cin >> L >> M;
	total = L+1; 
	for( int i=0; i<M; i++){
		cin >> x >> y;
		for( int j=x; j<=y; j++){
			a[j] = 1;
		}
		if( y>ma ){
			ma = y;
		}
		if( x<mi ){
			mi = x;
		}
	}
	for( int i=mi; i<=ma; i++){
		if( a[i] == 1 ){
			count = count + 1;
		}
	}
	total = total - count;
	cout << total << endl;
	return 0;
}
