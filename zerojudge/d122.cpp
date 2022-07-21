#include<iostream>

using namespace std;

int main(){
	int n=0, count=0, last=0;
	while(cin >> n){
		count = n/5;
		last = count;
		while( last >= 5 ){
			last = last/5;
			count = count + last;
		}
		cout << count << endl;
	}
	return 0;
}
	
