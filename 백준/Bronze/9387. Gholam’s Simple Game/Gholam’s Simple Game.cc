// 방향을 기준으로 시작점을 잡아야하는 데, 이 때 시작점이 0이거나 n-1일 경우 가는 방향에 접근할 수 없기 때문에 문제가 발생한다.
#include <iostream>
using namespace std;

int main(){
	int n, m, s, f = 1, cnt, T, arr[101] = {};
	
	cin >> T;
	while(T--){
		cin >> n >> m;
		
		cnt = 0;
		for(int i=0; i<n; i++){
			cin >> arr[i];
			if(arr[i] >= 2){ s = i, f = (arr[i] == 3 ? -1 : 1); }
		}
		for(int i=0; i<m; i++){
			if(s == 0) f=1;
			else if(s == n-1) f=-1;
			s += f;
			
			if(arr[s] == 0) cnt++;
		}
		
		cout << cnt << "\n";
	}
}