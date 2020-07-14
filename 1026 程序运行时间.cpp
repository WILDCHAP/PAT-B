/*结果：		全部通过	*/

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	int c1,c2;
	cin>>c1>>c2;
	double less=(c2-c1)*1.0/100;
	int sec=round(less);	//四舍五入得出秒数 
	//cout<<sec;
	int hh=sec/3600;
	int mm=(sec%3600)/60;
	int ss=sec%60;
	printf("%02d:%02d:%02d",hh,mm,ss);
	return 0;
} 
