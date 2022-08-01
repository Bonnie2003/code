#include<iostream>

using namespace std;

int main(){
	bool check = true;
	int length=0;
	string str;
	cin >> str;
	length = str.size();
	for( int i=0; i<length; i++ ){
		if( str[i] != str[length-i-1] ){
			cout << "no" << endl;
			check = false;
			break;
		}
	}
	if( check == true ){
		cout << "yes" << endl;
	}
	return 0;
}
