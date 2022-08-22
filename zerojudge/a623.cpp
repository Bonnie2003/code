#include<iostream>

using namespace std;

int a[100010] = {0};

void step( int x , int total , int count, int n);

void step( int x , int total , int count, int n){
//	cout << total << endl;
	total = total*x;
	count = count + 1;
	a[x] = total;
	if( x != n ){
		x = x+1;
		step( x, total , count, n);
	}
}

int main(){
	a[0] = 1;
	a[1] = 1;
	int n=0, m=0;
	int na=0, ma=0, ca=0;
	int count=1;
	while(cin >> n >> m){
		if( n>count ){
			step( count+1, a[count], count, n );
			count = n;
		}
		na = a[n];
		ma = a[m];
		ca = a[n-m];
		
	//	cout << na << " " << ma << " " << ca << endl;
		
		na = na / ma / ca;
		cout << na << endl;
	}
}
