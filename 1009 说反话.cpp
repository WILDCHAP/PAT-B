/*ע�⣺		�ַ�������'\0'	*/
/*�����		ȫ��ͨ��		*/ 

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	char vag[81][80],ch;
	int len=0;
	ch=getchar();
	while(ch!='\n'){
		int now=0;
		while(ch!=' ' && ch!='\n'){		//һֱ���뵽����ո�Ϊֹ 
			vag[len][now++]=ch;
			ch=getchar();
		}
		vag[len][now]='\0';
		len++;
		if(ch!='\n')	//������һ��ѭ��������Ϊ����س� 
			ch=getchar();
	}
	int i=len-1;
	while(i>0){
		cout<<vag[i]<<' ';
		i--;
	}
	cout<<vag[0];
	return 0;
} 
