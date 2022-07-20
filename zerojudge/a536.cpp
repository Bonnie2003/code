#include<iostream>

using namespace std;

int main(){
	int n=0, e=0, f=0, c=0, count=0, last=0;
	cin >> n;
	for( int i=0; i<n; i++ ){
		count = 0;
		cin >> e >> f >> c;
		last = e + f;
		while( last >= c ){
			count = count + last / c;
//			cout << "%% " << last  << endl;
			last = last/c + last%c;
		}
		cout << count << endl;
	}
	return 0;
}
