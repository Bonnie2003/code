#include<iostream>

using namespace std;

int a[1000000] = {0};

int main(){
	int n=0, m=0, x=0, y=0, num=0;
	long long total=0;
	cin >> n >> m;
//	cout << "Hi" << endl;
	for( int i=1; i<=n; i++){
		cin >> num;
		a[i] = a[i-1] + num;
	}
	cout << m << endl;
	for( int i=0; i<m; i++){
		cin >> x >> y;
		cout << a[y] - a[x-1] << endl;
	}
	return 0;
}
