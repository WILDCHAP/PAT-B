/*�����		ȫ��ͨ��	*/

#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main(){
	char ch;
	char pingying[10][6]={"ling","yi","er","san","si",
						"wu","liu","qi","ba","jiu"};
	int num=0;		//��Ϊ�����������������10^100��Ҳ����100λ
					//�����������999�����Կ�����int
	ch=getchar();
	while(ch!='\n'){
		int now=ch-'0';
		num+=now;
		ch=getchar();
	} 
	int gewei=num%10;		//num�����λ 
	int shiwei=(num%100)/10;
	int baiwei=num/100;
	if(baiwei){
		cout<<pingying[baiwei]<<' '<<pingying[shiwei]<<' '<<pingying[gewei];
	}
	else if(shiwei){
		cout<<pingying[shiwei]<<' '<<pingying[gewei];
	}
	else{
		cout<<pingying[gewei];
	}
	return 0;
} 
