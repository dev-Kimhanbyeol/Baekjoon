/*
Pirates talk a funny way. They say word where the letters are repeated more than they need to be. We would like know which letter appears the most frequently in a Pirate word.
For example: In the word “arrrrrghh”, the letter “r” appears 5 times while “h” appears twice.
Write a program that reads a pirate word from the terminal and writes the letter that occurs most frequently.
It is guaranteed that only one letter is the most repeated. That is, words like “aipo” won’t appear because no single letter wins.

The input will consist of two lines.
The first line will contain the size of the word and the second the word to process.
The word will only contain lowercase letters from a to z. The size of the word will be at most 1000 characters. No spaces or other symbols will appear.

Print a single line with the character that appears the most and the number of occurrences.

핵심 번역
2줄
1L, 문장의 길이를 제공함
2L, 문장은 소문자 a~z까지 제공 길이는 천 글자 안으로 됨(int 제공), 스페이스 또는 기타 문자는 나오지 않음
출력은 한 줄로 가장 많이 나온 알파벳과 나온 횟수
*/
#include <iostream>

int main(){
	int a, cnt[10001] = {};
	char ml='a', str[1001] = {};
	
	std::cin >> a >> str;
	for(int i=0; i<a; i++){
		cnt[str[i]] += 1;
		if(cnt[str[i]] >= cnt[ml]){
			ml = str[i];
		}
	}
	
	std::cout << ml << ' ' << cnt[ml]; 
}