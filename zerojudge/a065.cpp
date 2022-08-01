#include<iostream>

using namespace std;

int main(){
	string str;
	int k=0, length=0;
	cin >> str;
	length = str.size();
	for(int i=0; i<length-1; i++){
		if( str[i] >= str[i+1] ){
			cout << str[i]-str[i+1];
		}
		else{
			cout << str[i+1] - str[i];
		}
	}
	cout << endl;
	return 0;
}
