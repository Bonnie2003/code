#include<iostream>
#include<string>

using namespace std;

int a[27] = {0};
int ma[27] = {0};

int main(){
	int n=0, len=0, max=0, count=0;
	string str;
	char c;
	cin >> n ;
	getline( cin, str);
	for( int i=0; i<n; i++){
		getline( cin, str);
		len = str.length();
		for( int j=0; j<len; j++){
			if( str[j]>='a' && str[j]<='z' ){
				a[ str[j]-97 ] = a[ str[j]-97 ] + 1;
			}
			else if( str[j]>='A' && str[j]<='Z' ){
				a[ str[j]-65 ] = a[ str[j]-65 ] + 1;
			}
		}

		max=0;
		count=0;
		for( int j=0; j<26; j++){
			if( a[j] > max ){
				max = a[j];
				ma[0] = j;
				count = 1;
			}
			else if( a[j] == max ){
				ma[count] = j;
				count = count + 1;
			}
			a[j] = 0;
		}
		for( int j=0; j<count; j++){
			c = ma[j]+97;
			cout << c;
		}
		cout << endl;
	}
	return 0;
}
