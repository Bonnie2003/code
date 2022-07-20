#include<iostream>

using namespace std;

int main(){
	int m=0, count=0;
	long long total=0, n=0;
	while(cin >> n >> m){
		count = 1;
		total = n;
		while( total <= m ){
			n = n+1;
			total = total + n;
			count = count + 1;
		}
		cout << count << endl;
	}
	
	return 0;
}
