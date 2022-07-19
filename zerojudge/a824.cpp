#include<iostream>

using namespace std;

int main(){
	int a=0, b=0, c=0, count=1, total=0;
	cin >> a >> b >> c;
	while( count <= c ){
		if( count%a == 0 or count%b == 0 ){
			total = total + count;
		}
		count = count + 1;
	}
	total = total % 26;
	cout << char(total+64) << endl;
	return 0;
}
