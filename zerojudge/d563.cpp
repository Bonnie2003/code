#include<iostream>

using namespace std;

int a[100010] = {0};

int main(){
	int n=0, count = 1, total1=0, total2=0, num=1;
	cin >> n;
	cin >> a[0];
	for( int i=1; i<n; i++){
		cin >> a[i];
		a[i] = a[i-1] + a[i];
	}
	for( int i=0; i<n-1; i++ ){
		total1 = a[i];
		total2 = a[n-1] - a[n-1-num];
		while( total2 < total1 ){
			num = num + 1;
			total2 = a[n-1] - a[n-1-num];
		}
		if( total1 == total2 ){
			count = count + 1;
			num = num + 1;
		}
	}
	cout << count << endl;
	return 0;
}
