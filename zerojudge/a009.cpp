#include<iostream>

using namespace std;

int main(){
	char c;
	char ans;
	while( (c=getchar()) != '\n' ){
		ans = c - 7;
		cout << ans ;
	}
	cout << endl;
}
