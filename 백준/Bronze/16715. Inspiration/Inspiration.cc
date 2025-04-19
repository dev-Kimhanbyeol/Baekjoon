#include <iostream>
using namespace std;

int main(){
	int a, b = -1, c, d, cnt;
	
	cin >> a;
	for(int i=2; i<=a; i++){
		c=a, cnt = 0 ;
		while(c >= i){
			cnt += c%i;
			c /= i;
		}
		cnt += c%i;

		if(cnt > b) b = cnt, d = i;
	}
	cout << b << " " << d;
}
