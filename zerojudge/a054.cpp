#include<iostream>

using namespace std;

int main(){
	char x;
	int total=0, check=0, ans=0;
	for( int i=8; i>=1; i--){
		x = getchar();
		total = total + (x-48)*i;
	}
//	cout << total << endl;
	x = getchar();
//	cout << x-48 << endl;
	ans = 10 - (x-48) - total%10;
	ans = (ans+10) % 10;
//	cout << ans << endl;
	if( ans == 0 ){
		cout << "BNZ" << endl;
	}
	else if( ans == 1 ){
		cout << "AMW" << endl;
	}
	else if( ans == 2 ){
		cout << "KLY" << endl;
	}
	else if( ans == 3 ){
		cout << "JVX" << endl;
	}
	else if( ans == 4 ){
		cout << "HU" << endl;
	}
	else if( ans == 5 ){
		cout << "GT" << endl;
	}
	else if( ans == 6 ){
		cout << "FS" << endl;
	}
	else if( ans == 7 ){
		cout << "ER" << endl;
	}
	else if( ans == 8 ){
		cout << "DOQ" << endl;
	}
	else if( ans == 9 ){
		cout << "CIP" << endl;
	}
	return 0;
}
