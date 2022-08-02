#include<iostream>
#include<string>

using namespace std;

char a[30] = {'0', 'A', 'B', 'G', 'D', 'E', '#', 'Z', 'Y', 'H', 'I', 'K', 'L', 'M', 'N', 'X', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'F', 'C', '$', 'W', '3'};
int  b[30] = {0,1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500,600,700,800,900};

int main(){
	int total=0, length=0;
	string str;
	while( cin >> str ){
		if( str == "."){
			break;
		}
		total = 0;
		length = str.size();
		for( int i=1; i<=length; i++){
			for( int j=1; j<=27; j++){
				if( str[i-1] == a[j] ){
					total = total + b[j];
					break;
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}
