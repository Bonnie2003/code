#include<iostream>

using namespace std;

int main(){
	int x=0;
	cin >> x;
	cout << ( x>=6 and x<=11)*590 + ( x>=12 and x<=17 )*790 + ( x>=18 and x<=59)*890 + ( x>=60 )*399 << endl;
	return 0;
}
