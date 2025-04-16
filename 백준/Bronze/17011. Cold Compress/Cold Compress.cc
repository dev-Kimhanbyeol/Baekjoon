/*
첫 줄에 이어지는 줄의 개수 N이 주어집니다. 다음 N개의 줄에 공백 없이 1개 이상 80개 이하 문자가 주어집니다.
N개의 줄을 출력합니다. 출력의 i번째 줄은 입력의 i+1번째 줄을 압축한 결과입니다.
줄을 압축한 결과는 공백으로 구분된 쌍의 연속으로, 각 쌍은 (문자가 연속하는 횟수를 나타내는) 하나의 정수와 하나의 공백, 그리고 문자로 이루어집니다. 
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, cnt;
	char a, b;
	string s;
	cin >> n;
	
	while(n--){
		cin >> s;
		
		cnt = 0, a = s[0];
		for(int i=0; i<s.size(); i++, cnt++){
			if(a != s[i]){
				cout << cnt << " " << a << " ";
				a = s[i];
				cnt = 0;
			}
		}
		if(cnt > 0)cout << cnt << " " << a;
		cout << "\n";
	}
}