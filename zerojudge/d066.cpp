#include<iostream>

using namespace std;

int main(){
	int h=0, m=0;
	cin >> h >> m;
	if( 8<=h and h<=16 ){
		cout << "At School" << endl;
	}
	else if( h==7 ){
		if( m>=30 ){
			cout << "At School" << endl;
		}
		else{
			cout << "Off School" << endl;
		}
	}
	else{
		cout << "Off School" << endl;
	}
	return 0;
}
