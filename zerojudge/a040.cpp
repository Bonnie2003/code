#include<iostream>

using namespace std;

int main(){
	int n=0, m=0, x=0, y=0, total=0, count=0, num=0, check=0;
	cin >> x >> y;
	for( int i=x; i<=y; i++){
		count = 1;
		m= i;
		while( m/10 > 0 ){
			count = count + 1;
			m = m/10;
//			cout << " count:  " << count << endl;
		}
// 		cout << count << endl;
		m = i;
//		cout << m << endl;
		total = 0;
		for( int j=1; j<=count; j++){
			x=1;
			for( int k=0; k<count; k++){
				x = x*(m%10);
//				cout << " x: " << x << endl;
			}
			total = total + x;
			m = m/10;
//			cout << "total: " << total << "  m: " << m%10 << endl;
		}
//		cout << " i: " << i << "  total: " << total << endl;
		if( total == i ){
			cout << i << " " ;
			check =1;
		}
	}
	if(check==0){
		cout << "none" << endl;
	}
	cout << endl;
	return 0;
}
