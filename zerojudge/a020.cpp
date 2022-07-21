#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	long long total=0, x=0;
	cin >> str;
	if( str[0] >= 65 and str[0] <= 72 ){
		x = str[0]-55;
	}
	else if( str[0] >= 74 and str[0] <=78 ){
		x = str[0]-56;
	}
	else if( str[0] >= 80 and str[0] <= 86 ){
		x = str[0]-57;
	}
	else if( str[0] == 'I'){
		x = 34;
	}
	else if(  str[0] == 'O'){
		x = 35;
	}
	else if( str[0] == 'W'){
		x = 32;
	}
	else if( str[0] == 'X'){
		x = 30;
	}
	else if( str[0] == 'Y'){
		x = 31;
	}
	else{
		x = 33;
	}
//	cout << " x: " << x << "  x/10: " << x/10 << "  x%10: " << x%10 << endl;
	total = total + (x%10)*9 + (x/10);
	for( int i=1; i<=8; i++){
		total = total + (str[i]-48)*(9-i);
//		cout << " total: " << total << " str[i]: " << str[i]-48 << endl;
	}
	total = total + (str[9]-48);
//	cout << total << endl;
//	cout << total << endl;
	if( total % 10 == 0 ){
		cout << "real" << endl;
	}
	else{
		cout << "fake" << endl;
	}
	return 0;
}
