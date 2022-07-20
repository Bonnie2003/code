#include<iostream>

using namespace std;

int main(){
	int x=0, a=0, b=0, total=0, num=0;
	cin >> x;
	for(int i=0; i<x; i++){
		total = 0;
		cin >> a >> b;
		if( a%2 == 0 ){
			a = a+1;
		}
		if( b%2 == 0 ){
			b = b-1;
		}
		num = a;
		while( num <= b){
			total = total + num;
			num = num + 2;
		}
		cout << "Case " << i+1 << ": " << total << endl;
	}
	return 0;
}
