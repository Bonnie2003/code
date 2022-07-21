#include<iostream>

using namespace std;

int main(){
	int n=0, count=0, last=0;
	while(cin >> n){
		count = n;
		last = n;
		while( last >= 3 ){
			count = count + last / 3;
			last = last/3 + last%3;
//			cout << "last :  " << last << " count : " << count << endl;
		}
		if( last == 2 ){
			count = count + 1;
		}
		cout << count << endl;
	}
	return 0;
}
			
	
