#include<iostream>

using namespace std;

int main(){
	bool flag;
	int length=0, total=0;
	string str;
	while( cin >> str ){
		if( str == "0" ) break;
		total=0;
		flag = true;
		length = str.size();
		for( int i=0; i<length; i++){
			if( str[i] >= 65 && str[i] <= 90 ){
				str[i] = str[i] - 64;
				total = total + str[i];
			}
			else if( str[i] >= 97 && str[i] <= 122 ){
				str[i] = str[i] -96;
				total = total + str[i];
			}
			else{
				cout << "Fail" << endl;
				flag = false;
				break;
			}
		}
		if( flag == true ){
			cout << total << endl;
		}
	}
	return 0;
}
		
	
