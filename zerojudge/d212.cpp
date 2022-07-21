#include<iostream>

using namespace std;

int main(){
	long long a[10000] = {0};
	long long n=0, count=3, total=0;
	a[1] = 1;
	a[2] = 2;
	while( cin >> n ){
		while( count <= n ){
			a[count] = a[count-1] + a[count-2];
			count = count + 1;
		}
		cout << a[n] << endl;
	}
	return 0;
}
