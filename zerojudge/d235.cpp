#include<iostream>

using namespace std;

int main(){
	string str;
	int k=0, A=0, B=0, length=0;
	while(cin >> str){
		if( str == "0" ){
			break;
		}
		A=0;
		B=0;
		length = str.size();
		if( length % 2 == 0 ){
			for( int i=0; i<length; i=i+2){
				A = A + str[i]-48;
				B = B + str[i+1]-48;
			}
//			cout << "A: " << A << endl;
//			cout << "B: " << B << endl; 
		}
		else{
			B = B + str[0]-48;
			for( int i=1; i<length; i=i+2){
				A = A + str[i]-48;
				B = B + str[i+1]-48;
			}
//			cout << "A: " << A << endl;
//			cout << "B: " << B << endl; 
		}
		if( abs(A-B) % 11 == 0 ){
			cout << str << " is a multiple of 11." << endl;
		}
		else{
			cout << str << " is not a multiple of 11." << endl;
		}
	}
	return 0;
}
