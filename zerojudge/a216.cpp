#include<iostream>

using namespace std;

long long fa[30010] = {0};
long long ga[30010] = {0};

int gfunction( int check, int x );

int gfunction( int check, int x ){
	fa[check] = check*(check+1) /2;
	ga[check] = fa[check] + ga[check-1];
	if( check == x ){
		return x;
	}
	else{
		check = gfunction(check+1, x);
	}
}


int main(){
	int x=0, f=0, g=0, ans=0, check=2;
	fa[1] = 1;
	ga[1] = 1;
	while( cin >> x ){
		if( ga[x] == 0 ){
			check = gfunction(check, x);
			cout << fa[x] << " " << ga[x] << endl; 
		}
		else{
			cout << fa[x] << " " << ga[x] << endl;
		}
	}
	return 0;
}
