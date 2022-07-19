#include<iostream>

using namespace std;

int main(){
	int x=0, y=0, z=0;
	int a=0, b=0;
	while(cin >> x >> y >> z){
		a = x/10;
		b = z/2;
		if(a==b){
			y = y + a;
		}
		else if(a>b){
			y = y+b;
		}
		else{
			y = y + a;
		}
		cout << x << " 個餅乾，" << y << " 盒巧克力，" << z << " 個蛋糕。" << endl;
	}
	return 0;
}
	
