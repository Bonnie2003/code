#include<iostream>

using namespace std;

int main(){
	int x=0, count=1, total=0;
	while(cin >> x){
		count = 1;
		total = 0;
		while( count < x ){
			if( x%count == 0 ){
				total = total + count ;
			}
			count = count + 1;
		}
		if( total > x ){
			cout << "盈數" << endl;
		}
		else if( total < x){
			cout << "虧數" << endl;
		}
		else{
			cout << "完全數" << endl;
		}
	}
	return 0;
}
		
