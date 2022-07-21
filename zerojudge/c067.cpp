#include<iostream>

using namespace std;

int main(){
	int a[1000] = {0};
	int n=0, total=0, average=0, count=0, x=1;
	while( cin >> n ){
		count = 0;
		total = 0;
		if( n== 0 ){
			break;
		}
		for( int i=0; i<n; i++){
			cin >> a[i];
			total = total + a[i];
		}
		average = total / n;
		for( int i=0; i<n; i++){
			if( a[i] > average ){
				count = count + (a[i]-average);
			}
		}
		cout << "Set #" << x << endl << "The minimum number of moves is " << count << "." << endl;
		x = x+1;
	}
	return 0;
}
