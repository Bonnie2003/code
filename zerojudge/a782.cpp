#include<iostream>
#include<string>

using namespace std;

char a[80] ;

int main(){
	char c;
	char last;
	string str;
	int count=1;
	int length=0;
	while( cin >> str ){
		if( str == "END" ){
			break;
		}
		a[0] = str[0]-32;
		while( c = getchar() ){
//			cout << "count: " << count << "  c: " << c << " lenght:" << length << endl; 
			if( c == '\n' ){
				break;
			}
			if( c == ' ' ){
				c = getchar();
				last = c-32;
				a[count] = last;
//				cout << last << "retu" << endl;;
				count = count + 1;
				length = 1;
				str[0] = c;
//				cout << a[count-1] << endl;
			}
			else{
				str[ length ] = c;
				length = length + 1;
			}
		}
		for( int i=0; i<count; i++){
			cout << a[i];
		}
		cout << " ";
		for( int i=0; i<length; i++){
			cout << str[i];
		}
		cout << endl;
		count = 1;		
	}
	return 0;
}
