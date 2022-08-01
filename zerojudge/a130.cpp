#include<iostream>
#include<string>

using namespace std;

string a[101];

int main(){
	int T=0, count=0, ma=0, x=0;
	string str;
	cin >> T;
	for( int i=0; i<T; i++){
		count=0;
		ma=0;
		for( int j=0; j<10; j++){
			cin >> str >> x;
			if( x > ma ){
				ma = x;
				a[0] = str;
				count = 1;
			}
			else if( x==ma ){
				a[count] = str;
				count = count + 1;
			}
		}
		cout << "Case #" << i+1 << ":" << endl;
		for( int j=0; j<count; j++){
			cout << a[j] << endl;
		}
	}
	return 0;
}
