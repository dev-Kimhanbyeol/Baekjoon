#include <iostream>
using namespace std;

int main(){
	int w, s, a=0, b=0;
	
	cin >> w >> s;
	int coin = (s*s+s)/2;
	for(int i=0; i<=coin; i++){
		if(w-(29260*i)-(29370*(coin-i)) == 0){
			cout << coin-i; return 0;
		}
	}
}