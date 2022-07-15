#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int L=0, D=0;
	cin >> L;
	if( L>0 ){
		cout << 2*L -1 << endl;
	}
	else{
		L = abs(L);
		cout << 2*L << endl;
	}
	return 0;
}
