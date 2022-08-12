#include<iostream>

using namespace std;

int paste( int n, int x, int total );

int paste( int n, int x, int total ){
	if( total*2 >= n ){
		return x+1;
	}
	else{
		total = total * 2;
		x = x + 1;
		paste( n, x, total);
	}
}

int main(){
	int n=0, count=1, x=0, ans=0, total=0;
	while( cin >> n ){
		if( n<0 ){
			break;
		}
		if( n==1 ){
			cout << "Case " << count << ": " << 0 << endl;
		}
		else{
			x=0;
			total=1;
			ans = paste( n , x , total);
			cout << "Case " << count << ": " << ans << endl;
		}
		count = count + 1;
	}
	return 0;
}
