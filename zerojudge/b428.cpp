#include<iostream>

using namespace std;

int main(){
	int k=0, x=0;
	string str;
	string secret;
	while( cin >> str >> secret ){
		if( secret[0] >= str[0] ){
			cout << secret[0] - str[0] << endl;
		}
		else{
			cout << 26-str[0] + secret[0] << endl;
		}
	}
	return 0;
}
