#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
	string str;
	cin >> str;
	int length=0, A=0, B=0, check=1;
	length = str.size();
	if( length % 2 == 0 ){
		for( int i=0; i<length; i=i+2){
			A = A + str[i]-48;
			B = B + str[i+1]-48;
		}
	}
	else{
		B = B + str[0]-48;
		for( int i=1; i<length; i=i+2){
			A = A + str[i]-48;
			B = B + str[i+1]-48;
		}
	}
	cout << abs(A-B) << endl;
	return 0;
}
