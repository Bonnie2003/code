#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

char a[1001];

int main(){
	int length=0, count=0, num=0;
	string str;
	while( cin >> str ){
		count = 0;
		num = 0;
		length = str.size();
		for( int i=0; i<length; i++){
			if( str[i] >=65 && str[i]<=90 ){
				str[i] = str[i] + 32;
			}
			if( str[i] >=97 && str[i] <=122 ){
				a[num] = str[i];
				num = num + 1;
			}
		}
		sort( a, a+num);
		
/*		for( int i=0; i<num; i++){
			cout << a[i] ;
		}
		cout << endl;
*/		
		for( int i=0; i<num; i=i+2){
			if( a[i] != a[i+1] ){
				if( num%2 == 0 ){
					count = 2;
					break;
				}
				count = count + 1;
				if( count >= 2 ){
					break;
				}
				i = i+1;
//				cout <<"i:" << i << endl;
//				cout << "count: " << count << endl;
			}
		}
		if( count >=2 ){
			cout << "no..." << endl;
		}
		else{
			cout << "yes !" << endl;
		}
	}
	return 0;
}
