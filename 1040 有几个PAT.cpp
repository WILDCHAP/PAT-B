/*�ο���https://www.cnblogs.com/asinlzm/p/4440603.html*/
/*˼·��PATѡ��=����P����AT��ѡ��AT��ѡ��=����A����T��ѡ��*/ 
/*�����		ȫ��ͨ��*/
 
#include<iostream>
#include<cstdio>
#include<cstring>
#define MOD 1000000007
using namespace std;

int main(){
	char a[100001];
	scanf("%s",&a);
	long numT=0,numAT=0,num=0;	//�ֱ����A�����ж��ٸ�T��ѡ��P�����ж��ٸ�AT��ѡ�� 
	for(int i=strlen(a)-1;i>=0;i--){		//�Ӻ���ǰ���� 
		switch(a[i]){
			case 'T':
				numT++;	//T��ѡ��+1 
				num%=MOD;
				break;
			case 'A':
				numAT=numAT+numT;	//AT��ѡ��=֮ǰ�������˵�A��ѡ��+��ǰA��ѡ�� 
				numAT%=MOD;
				break; 
			case 'P':
				num=num+numAT;		//PAT��ѡ��=֮ǰ�������˵�P��ѡ��+��ǰP��ѡ�� 
				num%=MOD;
				break;
		}
	}
	cout<<num;
	return 0;
} 
