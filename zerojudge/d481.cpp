#include<iostream>

using namespace std;

long long x[110][110] = {0};
long long y[110][110] = {0};

int main(){
	int a=0, b=0, c=0, d=0;
	long long total=0;
	while( cin >> a >> b >> c >> d ){
		if( b != c ){
			cout << "Error" << endl;
		}
		else{
			for( int i=0; i<a; i++){
				for( int j=0; j<b; j++){
					cin >> x[i][j];
				}
			}
			for( int i=0; i<c; i++){
				for( int j=0; j<d; j++){
					cin >> y[i][j];
				}
			}
			for( int i=0; i<a; i++){
				for( int j=0; j<d; j++){
					
					total = 0;
					for( int k=0; k<b; k++){
						total = total + x[i][k]*y[k][j];
					}
					cout << total << " ";
				}
				cout << endl;
			}
		}
	}
	return 0;
}
