#include<iostream>
#include<string>

using namespace std;

int main(){
	int k=0, count=0, max=0, length=0, check=0, cate=0;
	bool flag;
	string str;
	cin >> k >> str;
	length = str.size();
	while( check < length ){
//		cout << "HI" << endl;
		if( str[check]>='a' && str[check]<='z' && (cate==0 || cate==1) ){
			flag = true;
			for( int i=check+1; i<=check+k-1; i++){
				if( str[i]>='a' && str[i]<='z' ){
					continue;
				}
				else{
					flag = false;
					check = i;
					if( count > max ){
						max = count;
					}
					count = 0;
					cate = 2;
					break;
				}
			}
			if( flag == true ){
				count = count + k;
				check = check + k;
				cate = 2;
//				cout << "check: " << check << endl;
//				cout << "count:" << count << endl;
			}
		}
		else if(str[check]>='A' && str[check]<='Z' && (cate==0 || cate==2) ){
			flag = true;
			for( int i=check+1; i<=check+k-1; i++){
				if( str[i]>='A' && str[i]<='Z' ){
					continue;
				}
				else{
					flag = false;
					check = i;
					if( count > max ){
						max = count;
					}
					count = 0;
					cate = 1;
					break;
				}
			}
			if( flag == true ){
				count = count + k;
				check = check + k;
				cate = 1;
//				cout << "count:" << count << endl;
//				cout << "check: " << check << endl;
			}
		}
		else if( str[check]>='a' && str[check]<='z' && cate==2 ){
			check = check + 1;
			if( count > max ){
				max = count;
			}
			count = k;
//			cout << "a check:" << check << " count:" << max << endl;
		}
		else if( str[check]>='A' && str[check]<='Z' && cate==1 ){
			check = check + 1;
			if( count > max ){
				max = count;
			}
			count = k;
//			cout << "A check:" << check << " count:" << max << endl;
		}
		else{
			if(count > max ){
				max = count;
			}
			count = k;
			check = check + 1;
		}
	}
	if( count > max ){
		max = count;
	}
	cout << max << endl;
}
