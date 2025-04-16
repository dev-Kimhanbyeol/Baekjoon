#include<iostream>
int main(){int a,b[1000]={};char c,d=0;std::cin>>a;for(;a--;){std::cin>>c;b[c]++;if(b[c]>=b[d])d=c;}std::cout<<char(d)<<" "<<b[d];}