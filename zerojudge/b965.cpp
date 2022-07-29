#include<iostream>

using namespace std;

int job[12] = {0};
int a[12][12] = {0};
int b[12] = {0};
int c[12][12] = {0};

int main(){
	int R=0, C=0, M=0, k=0, x=0;
	while( cin >> R >> C >> M){
		for( int i=0; i<R; i++ ){
			for( int j=0; j<C; j++ ){
				cin >> a[i][j];
			}
		}
		
/*		for( int i=0; i<R; i++ ){
			for( int j=0; j<C; j++ ){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
*/		
		for( int p=0; p<M; p++){
			cin >> job[p];
		}
		for( int p=M-1; p>=0; p--){
			k = job[p];
			if( k==0 ){
				
/*				cout << endl << " 翻轉前 " << endl;
				for(int i=0; i<R; i++){
					for( int j=0; j<C; j++){
						cout << a[i][j] << " ";
					}
					cout << endl;
				}
				cout << endl << endl;
*/				
				for( int i=0; i<R; i++){
					for( int j=0; j<C; j++){
						c[i][j] = a[i][j];
					}
				}
				for( int i=0; i<R; i++){
					for( int j=0; j<C; j++){
						a[C-1-j][i] = c[i][j];
					}
				}
				x = R;
				R = C;
				C = x;

/*				cout << endl << " 翻轉後 " << endl;
				for(int i=0; i<R; i++){
					for( int j=0; j<C; j++){
						cout << a[i][j] << " ";
					}
					cout << endl;
				}
				cout << endl << endl; 
*/			
/*				cout << endl << endl;
				for( int i=0; i<R; i++){
					for( int j=0; j<C-1; j++){
						cout << a[i][j] << " " ;
					}
					cout << a[i][C-1] << endl;
				}
*/
			}
			else{
				for( int j=0; j<R/2; j++){
					for( int i=0; i<C; i++){
						b[i] = a[j][i];
						a[j][i] = a[R-1-j][i];
						a[R-1-j][i] = b[i];
					}
				}
				
/*				cout << endl << endl;
				for( int i=0; i<R; i++){
					for( int j=0; j<C-1; j++){
						cout << a[i][j] << " " ;
					}
					cout << a[i][C-1] << endl;
				}
*/			
			}
		}
		cout << R << " " << C << endl;
		for( int i=0; i<R; i++){
			for( int j=0; j<C-1; j++){
				cout << a[i][j] << " " ;
			}
			cout << a[i][C-1] << endl;
		}
	}
	return 0;
}
