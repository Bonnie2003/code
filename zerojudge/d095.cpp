#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(){
	string s;
	int total=0;
	double h=0, m=0;
	double x=0, y=0, t=0;
	while( cin >> s ){
		total = 0;
		while(total = total + 1){
			if( s[total] == ':' ){
				m = (s[total+1]-48)*10 + (s[total+2]-48);
				if(total== 1){
					h = s[0]-48;
				}
				else{
					h = (s[0]-48)*10 + s[1]-48;
				}
				break;
			}
			else{
				continue;
			}
		}
		
//		cout << s << endl;
		
//		h = (s[0]-48)*10 + (s[1]-48);
//		m = (s[3]-48)*10 + (s[4]-48);
		
//		cout << (s[0]-48)*10 << " " << s[1] << " " << s[3] << " " << s[4] << endl;
//		
//		cout << h << "　　　" << m << endl; 
		
		if( h==0 and m==0 ){
			break;
		}
		if( h>=12 ){
			x = 30*(h-12) + 0.5*m;
		}
		else{
			x = 30*h + 0.5*m;
		}
		y = 6*m;
		t = abs(x-y);
		if( t<180 ){
			printf( "%.3f\n", t);
		}
		else{
			printf( "%.3f\n", 360-t);
		}
	}
	return 0;
}
