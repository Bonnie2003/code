#include<iostream>

using namespace std;

int main(){
	int k=0;
	double count=0;
	double total=0;
	cin >> k;
	while( total <= k ){
		count = count+1;
//		cout << "*" << total << "W# " << count << endl;
		total = total + 1/count;
//		cout << " " << 1/count << endl;
	}
	cout << count << endl;
	return 0;
}
