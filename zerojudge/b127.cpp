#include<iostream>

using namespace std;

int a[50] = {0};

int main(){
	int n=0, count=3;
	a[0] = 1;
	a[1] = 1;
	a[2] = 2;
	while( cin >> n){
		if( count <= n ){
			while( count <= n ){ 
				a[count] = a[count-1] + a[count-2];
//				cout << " a[count]: " << a[count] << endl;
				count = count + 1;
			}
//			cout << "count: " << count << endl;
			cout << a[n] << endl;
		}
		else{
			cout << a[n] << endl;
		}
	}
	return 0;
}
