#include<iostream>

using namespace std;

int main(){
	int i=0, j=0, x=0, y=0, m=0, number=0, total =0, count=0;
	while( cin >> i >> j ){
		cout << i << " " << j << " " ;
		x = max( i,j);
		y = min( i,j);
		count = y;
		m=0;
		while( count <= x ){
			number = count;
			total = 1;
			while( number != 1){
				if( number%2 != 0 ){
					number = number*3 + 1;
					total = total + 1;
				}
				else{
					number = number / 2;
					total = total + 1;
				}
			}
			count = count + 1;
			if(total > m){
				m = total;
			}
		}
		cout << m << endl;
	}
	return 0;
}
			
