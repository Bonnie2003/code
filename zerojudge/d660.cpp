#include<iostream>

using namespace std;

int main(){
	int T=0, count=0, n=0, x=0, y=0, num=0;
	int H=0, L=0; 
	cin >> T;
	while( count < T ){
		cin >> n;
		num = 0;
		H = 0;
		L = 0;
		cin >> x;
		while( num < n-1 ){
			cin >> y;
			if( y>x ){
				H = H + 1;
			}
			else if( y<x ){
				L = L + 1;
			}
			x = y;
			num = num + 1;
		}
		cout << "Case " << count + 1 << ": " << H << " " << L << endl;
		count = count + 1;
	}
	return 0;
}
