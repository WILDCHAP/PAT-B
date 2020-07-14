/*参考：https://www.cnblogs.com/asinlzm/p/4440603.html*/
/*思路：PAT选择=所有P后面AT的选择；AT的选择=所有A后面T的选择*/ 
/*结果：		全部通过*/
 
#include<iostream>
#include<cstdio>
#include<cstring>
#define MOD 1000000007
using namespace std;

int main(){
	char a[100001];
	scanf("%s",&a);
	long numT=0,numAT=0,num=0;	//分别代表A后面有多少个T供选择，P后面有多少个AT供选择 
	for(int i=strlen(a)-1;i>=0;i--){		//从后往前遍历 
		switch(a[i]){
			case 'T':
				numT++;	//T的选择+1 
				num%=MOD;
				break;
			case 'A':
				numAT=numAT+numT;	//AT的选择=之前遍历过了的A的选择+当前A的选择 
				numAT%=MOD;
				break; 
			case 'P':
				num=num+numAT;		//PAT的选择=之前遍历过了的P的选择+当前P的选择 
				num%=MOD;
				break;
		}
	}
	cout<<num;
	return 0;
} 
