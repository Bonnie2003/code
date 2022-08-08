#include<iostream>
#include<algorithm>

using namespace std;

int GCD( int x, int y );

int GCD( int x, int y ){
//	cout << "hello" << endl;
	int ma = max( x, y);
	int mi = min( x, y);
//	cout << ma << " " << mi << endl;
	while( true ){
		ma = ma - mi*(ma/mi);
		if( ma == 0 ){
			return mi;
		}
//		cout << ma << endl;
		mi = mi - ma*(mi/ma);
		if( mi == 0 ){
			return ma;
		}
//		cout << ma << " " << mi << endl;
	}
}
			 

int main(){
	int n=0, x=0, y=0, ans=0;
	while( cin >> n ){
		cin >> y;
		for( int i=1; i<n; i++){
			cin >> x;
			ans = GCD( x, y);
//			cout << "ans:" << ans << endl;
			y = ans;
		}
		cout << ans << endl;
	}
	return 0;
}
	
