#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n=0, m=0, result=0;
	while( cin >> n >> m ){
		result = m* log10(n) + 1;
		cout << result << endl;
	}
	return 0;
}
	
