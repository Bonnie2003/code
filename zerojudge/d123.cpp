#include<iostream>
#include<algorithm>

using namespace std;

int a[110] = {0};
int b[10010] = {0};

int main(){
	int n=0, num=0, check=0, time=1;
	while( cin >> n ){
		check = 0;
		for( int i=0; i<n; i++){
			cin >> a[i];
		}
		num=0;
		for( int i=0; i<n; i++){
			for( int j=i; j<n; j++){
				b[num] = a[i] + a[j];
				num = num + 1;
			}
		}
		sort( b, b+num);
		for( int i=0; i<num; i++){
			if( b[i] == b[i+1] ){
				cout << "Case #" << time << ": It is not a B2-Sequence." << endl;
				check = 1;
				break;
			}
		}
		if( check == 0 ){
			cout << "Case #" << time << ": It is a B2-Sequence." << endl;
		}
		time = time + 1;
	}
	return 0;
}
