/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;cin>>n;
	double num[n],sum=0;
	int a=n,b=1;
	for(int i=0;i<n;i++){
		cin>>num[i];
		sum=sum+num[i]*a*b*1.0;		//注意！a*b的值可能随着ab无限靠近越来越大最后可能超过int范围 
		a--;b++;
	}
	printf("%.2f",sum);
	return 0;
} 
