/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n,a[101]={0},k;
	scanf("%d",&n);
	int i,t;
	for(i=0;i<n;i++){
		scanf("%d",&t);
		if(t>=0 && t<=100)
		a[t]++;
	}
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&t);
		if(i)printf(" ");
		printf("%d",a[t]);
	}
	return 0;
} 
