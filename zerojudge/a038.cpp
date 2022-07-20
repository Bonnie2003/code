#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	int k=0, x=0, y=0;
	cin >> str;
	k = str.length();
	for( int i=k-1; i>=0; i-- ){
//		cout << x << " " << str[i] << endl;
		if( x==0 and str[i] == '0' ){
//			cout << "Hi" << endl;
			continue;
		}
		else{
			x = 1;
			y = 1;
			cout << str[i] ;
		}
	}
	if( y == 0 ){
		cout << 0 << endl;
	}
	cout << endl;
	return 0;
}
