#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int k=0, count=0, total=0;
	while(cin >> k){
		count = 0;
		total = 0;
		k = abs(k);
		while( total < k ){
	//		cout << "Hi " << count << endl;
			count = count + 1;
			total = total + count;
		}
		if(total == k){
			cout << count << endl;
		}
		else if ((total - k)%2 == 0 ){
			cout << count << endl;
		}
		else{
			while( (total-k)%2 != 0 ){
	//			cout << " Ha " << count << endl;
				count = count + 1;
				total = total + count;
			}
			cout << count << endl; 
		}
	}
	return 0;
}
