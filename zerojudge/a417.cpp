#include<iostream>

using namespace std;

int a[100][100] = {0};

int main(){
	int T=0, n=0, m=0, count=1, ans=0, y=0;
	cin >> T;
	for( int p=0; p<T; p++){
		cin >> n >> m;
		count = 1;
		if( n%2 != 0 ){
			a[n/2][n/2] = n*n;
			for( int i=0; i<(n/2); i++){     //有i層 
//				cout << "i: " << i << endl;
				for( int j=0; j<4; j++){          //每層有4區 
//					cout << "j: " << j << endl;
					for( int x=0; x<(n-1)-2*i; x++ ){
//						cout << "x: " << x << "  count: " << count << endl;
						if( j==0 ){
							a[i][x+i] = count;
							count = count + 1;
						}
						else if( j==1 ){  
							a[x+i][n-1-i] = count;
							count = count + 1;
						}
						else if( j==2 ){
							a[n-1-i][n-1-x-i] = count;
							count = count + 1;
						}
						else{
							a[n-1-i-x][i] = count;
							count = count + 1;
						}						
					}
				}
			}
			if( m==1 ){
				for( int i=0; i<n; i++){
					cout << a[i][0];
					for( int j=1; j<n; j++){
						ans=0;
						y = a[i][j];
						while( y/10 != 0 ){
							ans = ans + 1;
							y = y/10;
						}
						for( int k=1; k<5-ans; k++){
							cout << " ";
						}
						cout << a[i][j];
					}
					cout << endl;
				}
			}
			else{
				for( int i=0; i<n; i++){
					cout << a[0][i];
					for( int j=1; j<n; j++){
						ans=0;
						y = a[j][i];
						while( y/10 != 0 ){
							ans = ans + 1;
							y = y/10;
						}
						for( int k=1; k<5-ans; k++){
							cout << " ";
						}
						cout << a[j][i];
					}
					cout << endl;
				}
			}
		}
		else{
			a[n/2][n/2-1] = n*n;
			for( int i=0; i<n/2; i++){
				for( int j=0; j<4; j++){
					for( int x=0; x<(n-1-2*i); x++){
						if( j==0 ){
							a[i][x+i] = count;
							count = count + 1;
						}
						else if( j==1 ){
							a[x+i][n-1-i] = count;
							count = count + 1;
						}
						else if( j==2 ){
							a[n-1-i][n-1-i-x] = count;
							count = count + 1;
						}
						else{
							a[n-1-i-x][i] = count;
							count = count + 1;
						}
					}
				}
			}
			a[n/2-1][n/2-1] = n*n-3;
			a[n/2-1][n/2] = n*n-2;
			a[n/2][n/2] = n*n-1;
			if( m==1 ){
				for( int i=0; i<n; i++){
					cout << a[i][0];
					for( int j=1; j<n; j++){
						ans = 0;
						y = a[i][j];
						while( y/10 != 0 ){
							ans = ans + 1;
							y = y/10;
						}
						for( int k=1; k<5-ans; k++){
							cout << " ";
						}
						cout << a[i][j];
					}
					cout << endl;
				}
			}
			else{
				for( int i=0; i<n; i++){
					cout << a[0][i];
					for( int j=1; j<n; j++){
						ans = 0;
						y = a[j][i];
						while( y/10 != 0 ){
							ans = ans + 1;
							y = y/10;
						}
//						cout << "a[j][i]: " << a[j][i] << " ans : " << ans << endl;
						for( int k=1; k<(5-ans); k++){
//							cout << " 5-ans " << 5-ans << endl;
							cout << " ";
						}
						cout << a[j][i];
					}
					cout << endl;
				}
			}
		}
	}
	return 0;
}
