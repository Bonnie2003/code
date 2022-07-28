#include<iostream>

using namespace std;

int a[100000000] = {0};

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	long long n=0, m=0, x=0, count=0;
	cin >> n >> m;
	for( int i=1; i<=n; i++){
		count = 0;
		
/*		for( int j=0; j<m ; j++){
			a[j] = 0;
		}
*/
		for( int j=0; j<m; j++){
			cin >> x;
			a[x] = i;
		}
		
/*		for( int j=0; j<20; j++){
			cout << a[j] << " ";
		}
		cout << endl << endl;
*/		
		for( int j=0; j<m; j++){
			cin >> x;
			if( a[x] == i ){
				count = count + 1;
			}
		}
		cout << count << endl; 
	}
	return 0;
}
