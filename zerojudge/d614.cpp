#include<iostream>

using namespace std;

int a[80] = {0};

int main(){
	int T=0, total=0, count=0;
	char c;
	cin >> T;
	c = getchar();
	for( int i=0; i<T; i++){
		total=0;
		count = 0;
		while( c = getchar() ){
			if( c == '\n' ){
				for( int j=0; j<count; j++){
					total = total + a[j];
				}
				count=0;
				break;
			}
			if( c == ' ' ){
				c = getchar();
				c = getchar();
				for( int j=0; j<count; j++){
					total = total + a[j];
				}
				count = 0;
			}
			else{
				a[count] = c-48;
				count = count + 1;
				for( int j=0; j<count-1; j++){
					a[j] = a[j] * 10; 
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}
