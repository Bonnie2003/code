#include<iostream>

using namespace std;

int a[40] = {0};

int main(){
	int n=0, count=0, num=0;
	while( cin >> n ){
		count = 0;
		num = n;
		while( num/2 > 0 ){
			a[count] = num%2;
			count = count + 1;
			num = num/2;
//			cout << "a[count-1]: " << a[count-1] << endl;
		}
		if( num/2 == 0 ){
			if(num%2 != 0 ){
				a[count] = num%2;
				count = count + 1;
			}
		}
		for( int i=count-1; i>=0; i--){
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
}
