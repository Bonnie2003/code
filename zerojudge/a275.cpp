#include<iostream>
#include<string>

using namespace std;

int a[100] = {0};
int b[100] = {0};

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	bool flag;
	int length=0;
	string str;
	string str1;
	while( cin >> str){
		flag = true;
		if( str == "STOP!!" )break;
		cin >> str1;
		length = str.size();
		for( int i=0; i<length; i++){
			a[ str[i]-33 ] = a[ str[i]-33 ] + 1;
			b[ str1[i]-33 ] = b[ str1[i]-33 ] + 1;
		}
		for( int i=0; i<=97; i++){
			if( a[i] != b[i] ){
				flag = false;
			}
			a[i] = 0;
			b[i] = 0;
		}
		if( flag == true ){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}
