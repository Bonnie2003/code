#include<iostream>
#include<algorithm>

using namespace std;

int a[100010] = {0};
int b[100010] = {0};
int c[50000] = {0};

int main(){
	int n=0, ans=-40000;
	cin >> n;
	cin >> a[0];
	b[0] = a[0];
	for( int i=1; i<n; i++ ){
		cin >> a[i];
		b[i] = max( a[i], b[i-1] );
	}
	for( int i=1; i<n; i++){
		if( ans < b[i-1]-a[i] ){
			ans = b[i-1]-a[i];
		}
	}
	cout << ans << endl;
	return 0;
}
