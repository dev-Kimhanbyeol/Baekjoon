/*
The floor of Gholam’s bedroom is tiled with white and yellow tiles.
Sometimes when he is bored, he stands on one of the tiles and starts to walk along the row he is standing on.
He first decides on a number n and starts to walk n steps.
If he reaches the wall, he turns back and continues to walk in the opposite direction.
He continues until he takes n steps. Note that turning back besides a wall does not count as a step.
He counts how many yellow tiles he steps on.

For example, the figure on the right shows a row in the floor.
The colors of the tiles are shown with the characters ‘Y’ and ‘W’ for yellow and white tiles respectively.
If he starts at tile 3 facing to the right, and decides to take 7 steps, he finally stops at tile 2. During this walk, he steps 3 times on yellow tiles.

골람의 침실은 하얀색과 노란 타일로 되어 있다
몇 번은 침대에서 날어난 타일에서 걷기 시작할 때 
그는 첫번째로 숫자만큼 걷는다
그가 뒤로 턴하거나 계속해서 걷 ??
그는 걷는 수 만큼을 세고 뒤로 도는 경우에는 숫자를 세지 않늗나

예시로, ? 몇 줄의 바닥에서?
타일의 색상을 y 그리고 w로 노란색과 하얀으로 구분한다
만약 그가 3에서 시작했으면 오른쪽으로 7번 걷고 타일 2에서 멈추고 노란 타일은 3번만 나온다.


input
The input contains T test cases. The first line of input has only the integer T.
Each test case contains two lines. The first line contains two integers m (3 ≤ m ≤ 100) and n (1 ≤ n ≤ 1000),
which is the number of steps Gholam takes. The second line contains m integers describing the tiles in the row and is in the following format:

T개의 테스트 케이스가 제공됨
한 테스트 케이스마다 2줄이 제공되고 첫번째 줄의 첫번째 값은 3보다 크거나 같고 100보다 작거나 같다. 두번째 값은 1보다 크거나 같고 1000보다 작거나 같다
두번째 줄에서는 m개 만큼 숫자가 제공된다.

a1 a2 ... am
Each ai is either 0, 1, 2, or 3.
If ai = 0, then ai has a yellow tile, and ai > 0 indicates that ai has a white tile.
If ai = 2, then Gholam is starting from the tile ai, facing to the right, and
if ai = 3, then he is starting from the tile ai, facing to the left. The numbers are separated by space characters.
You may assume that exactly one of the numbers is 2 or 3. Note that it is implied that Gholam always starts from a white tile.

제공되는 값은 0, 1, 2, 3 중에 하나다.
0이라면 노란 타일이다. 0보다 크다면 하얀 타일이다.
2이라면 현재 타일에서 오른쪽으로, 3이라면 왼쪽으로 간다.
제공되는 값들은 띄어쓰기로 구분한다.
?? 2 또는 3라면 하얀색 타일에서 시작한다

print
For each test case, write a single line in the output having a single number which is the number of times Gholam steps on a yellow tile.
테스트 케이스에서 노란타일을 몇 번 밟았는 지 체크해라
*/
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