/*�º�����sscanf; sprintf*/
/*�����	ȫ��ͨ��	*/ 

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int n;cin>>n;
	double sum=0,temp;
	int num=0;
	char a[50],b[50];
	for(int i=0;i<n;i++){
		scanf("%s",a);
		sscanf(a,"%lf",&temp);//��a�ַ���ת��Ϊ��ʽlf�浽temp�� 
		sprintf(b,"%.2lf",temp);//����ʽ����tempд���ַ���b 
		bool flag=0;
		for(int j=0;j<strlen(a);j++){
			if(a[j]!=b[j]){
				flag=1;
				break;
			}
		}
		if(flag || temp<-1000 || temp>1000){
			printf("ERROR: %s is not a legal number\n",a);
		}
		else{
			num++;
			sum+=temp;
		}
	}
	if(num==1){
		printf("The average of 1 number is %.2lf",sum/(1.0*num));
	}
	else if(num>1){
		printf("The average of %d numbers is %.2lf",num,sum/(1.0*num));
	}
	else{
		printf("The average of 0 numbers is Undefined");
	}
	return 0;
} 
