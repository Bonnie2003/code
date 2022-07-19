#include<iostream>

using namespace std;

int main(){
	int a=0, b=0, t=0, ans=0;
	cin >> a >> b;
	if( a%2 ==0 and b%2 == 0 ){
		t=a;
		while( t <= b ){
			ans = ans + t;
			t = t + 2;
		}
		cout << ans << endl;
	}
	else if( a%2 == 0 and b%2 != 0 ){
		t=a;
		while( t<b ){
			ans = ans + t;
			t = t + 2;
		}
		cout << ans << endl;
	}
	else if( a%2 != 0 and b%2 == 0 ){
		t=a+1;
		while( t<=b ){
			ans = ans + t;
			t = t + 2;
		}
		cout << ans << endl;
	}
	else{
		t=a+1;
		while( t<b ){
			ans = ans + t;
			t = t+2;
		}
		cout << ans << endl;
	}
	return 0;
}
