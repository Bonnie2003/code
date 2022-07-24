#include<iostream>

using namespace std;

int a[10000][10000] = {0};

int main(){
	int n=0, m=0, x=0, total=0, x1=0, x2=0, y1=0, y2=0;
	while (cin >> n >>m) {
//		cout << m << endl;
		for( int i=1; i<=n; i++){
			for( int j=1; j<=n ; j++){
				cin >> x;
					a[i][j] = a[i][j-1] + a[i-1][j] - a[i-1][j-1] + x;
			}
		}
		
	/*	cout << endl << endl;
		
		for( int i=1; i<=n ; i++){
			for( int j=1; j<=n; j++){
				cout << a[i][j] << " " ;
			}
			cout << endl;
		}
		
		cout << endl << endl;
	*/	
		for( int i=0; i<m; i++){
			cin >> x1 >> y1 >> x2 >> y2;
			total = a[x2][y2] - a[x1-1][y2] - a[x2][y1-1] + a[x1-1][y1-1];
			cout << total << endl;
		}
	}
	return 0;
}
