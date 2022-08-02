#include<iostream>
#include<string>

using namespace std;

int main(){
	int total=0;
	string str;
	while( cin >> str ){
		total = str[0]-48;
		for( int i=2; i<=4; i++){
			total = total + (str[i]-48)*i;
		}
		for( int i=6; i<=10; i++){
			total = total + (str[i]-48)*(i-1);
		}
//		cout << total << endl;
		total = total%11;
		if( total == 10 ){
			if( str[12] == 'X' ){
				cout << "Right" << endl;
			}
			else{
				for( int i=0; i<=11; i++){
				cout << str[i];
				}
				cout << 'X' << endl;
			}
		}
		else{
			if( total == str[12]-48 ){
				cout << "Right" << endl;
			}
			else{
				for( int i=0; i<=11; i++){
					cout << str[i];
				}
				cout << total << endl;
			}
		}
	}
	return 0;
}
