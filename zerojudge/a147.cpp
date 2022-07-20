#include<iostream>

using namespace std;

int main(){
	int n=0, num=0;
	while(cin >> n){
		if( n == 0 ){
			break;
		}
		if( n == 1 ){
			cout << endl;
		}
		else{
			num = 2;
			cout << "1" ;
			while(num<n){
				if( num%7 != 0 ){
					cout << " " << num;
				}
				num = num + 1;
			}
			cout << endl;
		}
	}
	return 0;
}
	
