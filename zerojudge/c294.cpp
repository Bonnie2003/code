#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int x=0, y=0, z=0, ma=0, mi=0, middle=0, total=0, tri=0;
	cin >> x >> y >> z;
	total = x+y+z;
	ma = max( {x,y,z} );
	mi = min( {x,y,z} );
	middle = total-ma-mi;
	cout << mi << " " << middle << " " << ma << endl;
	if( ma > mi+middle ){
		cout << "No" << endl;
	}
	else{
		ma = ma*ma;
		mi = mi*mi;
		middle = middle*middle;
		if( ma > mi + middle ){
			cout << "Obtuse" << endl;
		}
		else if( ma == mi + middle ){
			cout << "Right" << endl;
		}
		else{
			cout << "Acute" << endl;
		}
	}
	return 0;
}
	
