#include <iostream>
#include <string>

int main(){
	std::string a, b;
	
	std::cin >> a;
	while(a.size()%3 != 0) a = '0' + a;
	for(int i = 0; i<a.size(); i+=3) std::cout << (a[i]-'0')*4 + (a[i+1]-'0')*2 + (a[i+2]-'0');
}
