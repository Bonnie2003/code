#include<iostream>

using namespace std;

int a[10000] = {0};

int main(){
	int n=0, count=0, x=0, total=0;
	while( cin >> n ){	
		for( int i=0; i<n; i++){
			cin >> a[i];
			if( i != 0 ){
				total = i;
				for( int j=i-1; j>=0; j-- ){
					if( a[total] < a[j] ){
						x = a[total];
						a[total] = a[j];
						a[j] = x;
						total = total -1;
//						cout << " HI: " << endl;
					}
					else{
//						cout << "前: " << a[i] << "後: " << a[j] << "i: "<< i << endl; 
						break;
					}
				}
			}
		}
		for( int i=0; i<n; i++ ){
			cout << a[i] << " " ;
		}
		cout << endl;
	}
	return 0;
}
