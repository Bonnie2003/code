#include<iostream>
#include<string>

using namespace std;

int main(){
	int b=0, length=0, ans=0, x=1, total=0, count=0, N=0, y=0;
	string str;
	cin >> b >> str;
	length = str.length();
	for( int i=0; i<length; i++){
		x = str[i]-48;
		y=1;
		for( int j=0; j<length; j++){
			y = y*x;
		}
		for( int j=0; j<length-i-1; j++){
			x = x*b;
		}
		total = total + x;
		ans = ans + y;
	}
//	cout << "ans:" << ans << endl;
//	cout << "total:" << total << endl;
	if( total == ans ){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}
