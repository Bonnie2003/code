#include<iostream>

using namespace std;

int main(){
	int x;
	int y;
	int z;
	int s;
	cin >> x >> y >> z;
	s = (x+y+z) / 2;
	cout << s*(s-x)*(s-y)*(s-z) << endl;
	return 0;
}
