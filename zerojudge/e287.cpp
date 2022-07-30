#include<iostream>

using namespace std;

int a[105][105] = {-1};
int b[3] = {0};


int main(){
	int n=0, m=0, x=0, y=0, mi=1000000, bx=0, by=0, total=0, count=0;
	cin >> n >> m;
	for( int i=1; i<=n; i++){
		for( int j=1; j<=m; j++){
			cin >> a[i][j];
			if( a[i][j] < mi ){
				x = i;
				y = j;
				mi = a[i][j];
			}
		}
	}
	total = a[x][y];
	a[x][y] = -1;
	for( int i=1; i<=m; i++){
		a[0][i] = -1;
	}
	for( int i=1; i<=n; i++){
		a[i][0] = -1;
	}
	for( int i=1; i<=m; i++){
		a[n+1][i] = -1;
	}
	for( int i=1; i<=m; i++ ){
		a[i][m+1] = -1;
	}
/*	for( int i=0; i<=n+1; i++){
		for( int j=0; j<=m+1; j++ ){
			cout << a[i][j] << " " ;
		}
		cout << endl;
	}
	cout << "x: " << x << "  y: " << y << endl;
*/	
	while( true ){
		count = 0;
		mi = 1000000;
//		cout << endl << endl << a[x+1][y] << " " << a[x-1][y] << " " << a[x][y+1] << " " << a[x][y+1] << endl << endl;
		for( int i=-1; i<=1; i = i + 2){
			if( a[x+i][y] != -1 ){
				if( a[x+i][y] < mi ){
					mi = a[x+i][y];
					bx = x+i;
					by = y;
					count = count + 1;
//					cout << "x+i: " << x+i << "  y: " << y << endl;
//					cout << "mi: " << mi << "  count: " << count << endl;
				}
			}
			if( a[x][y+i] != -1 ){
				if( a[x][y+i] < mi ){
					mi = a[x][y+i];
					bx = x;
					by = y+i;
					count = count + 1;
//					cout << "x+i: " << x << "  y: " << y+i << endl;
//					cout << "mi: " << mi << "  count: " << count << endl;
				}
			}
		}
			
		if( count == 0 ){
			cout << total << endl;
			break;
		}
		else{
			total = total + mi;
			a[bx][by] = -1;
			x = bx;
			y = by;
		}
/*		for( int i=0; i<=n+1; i++){
			for( int j=0; j<=m+1; j++ ){
				cout << a[i][j] << " " ;
			}
			cout << endl;
		}
		cout << "x: " << x << "  y: " << y << endl;
*/
	}
	return 0;
}
