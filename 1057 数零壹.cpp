/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	char ch;
	int sum=0;
	while((ch=getchar())!='\n'){
		int k=0;
		if(ch>='a' && ch<='z'){
			k=ch-'a'+1;
		}
		else if(ch>='A' && ch<='Z'){
			k=ch-'A'+1;
		}
		if(k){
			sum+=k;
		}
	}
	int n1=0,n0=0;
	int yu;
	while(sum){
		yu=sum%2;
		sum=sum/2;
		if(yu)n1++;
		else n0++;
	}
	printf("%d %d",n0,n1);
	return 0;
} 
