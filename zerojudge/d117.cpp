#include<iostream>
#include<string>

using namespace std;

int a[1100] = {0};

int main(){
	string str;
	int n=0, num=2, total=0;
	while( num<1050 ){
		for( int i=2; i<1050/num; i++){
			a[i*num] = 1;
		}
		num = num + 1;
	}
	while( cin >> str ){
		n = str.length();
		total=0;
		for( int i=0; i<n; i++){
			if( str[i]>='a' && str[i]<='z' ){
				total = total +  str[i] - 96;
			}
			else{
				total = total + str[i] -38;
			}
		}
//		cout << total << endl;
		if( a[total] == 1 ){
//			cout << "total:" << total << endl;
			cout << "It is not a prime word." << endl;
		}
		else{
//			cout << "total:" << total << endl;
			cout << "It is a prime word." << endl;
		}
	}
	return 0;
}
