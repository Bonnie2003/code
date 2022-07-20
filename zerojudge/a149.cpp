#include<iostream>
#include<string>

using namespace std;

int main(){
	int num=0, n=0;
	int x=0, count=0;
	long long total=1;
	string str;
	cin >> num;
	while( n < num ){
//		cout << "Hello!!" << endl;
		total = 1;
		count = 0;
		cin >> str;
		x = str.length();
		while( count < x ){
//			cout << " " << str[count] << " ** " << count << " ## " << total << endl;
			total = total * (str[count]-48) ;
//			cout << " % " << total << endl;
			count = count + 1;
		}
		cout << total << endl;
		n = n + 1;
	}
	return 0;
}
	
