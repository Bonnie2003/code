#include<iostream>
#include<cmath> 

using namespace std;

int main(){
	long long x=0, y=0, a=0; 
	cin >> x >> y;
	a = (x-1)/2;
	y = y/2;
	
	cout << y-a + (x==0) << endl;
	return 0;
}
