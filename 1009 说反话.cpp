/*注意：		字符串结束'\0'	*/
/*结果：		全部通过		*/ 

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	char vag[81][80],ch;
	int len=0;
	ch=getchar();
	while(ch!='\n'){
		int now=0;
		while(ch!=' ' && ch!='\n'){		//一直输入到输入空格为止 
			vag[len][now++]=ch;
			ch=getchar();
		}
		vag[len][now]='\0';
		len++;
		if(ch!='\n')	//跳出上一个循环不是因为输入回车 
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
