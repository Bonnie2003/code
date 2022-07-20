#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int x=0, y=0, count=0, num=0, a=0, b=0;
	while(cin >> a >> b){
		x = min(a,b);
		y = max(a,b);
		if( x==0 and y==0 ){
			break;
		}
		count = 0;
		num = 1;
		while( num*num <= y ){
			if( num*num >= x ){
				count = count + 1;
			}
			num = num + 1;
		}
		cout << count << endl;
	}
	return 0;
}
