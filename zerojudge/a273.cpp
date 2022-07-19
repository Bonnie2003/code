#include<iostream>

using namespace std;

int main(){
	unsigned int n=0, k=0;
	while(cin >> n >> k){
		if( n==0 ){
			cout << "Ok!" << endl;
		}
		else if( k == 0 ){
			cout << "Impossib1e!" << endl;
		}
		else if( n%k == 0 ){
			cout << "Ok!" << endl;
		}
		else{
			cout << "Impossib1e!" << endl;
		}
	}
	return 0;
}
