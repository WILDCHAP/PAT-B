/*�����		����δͨ��*/



/*#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int ques[3000];		//��������
	//int ans[300];		//�����
	int len=1,i;
	bool tag=0; 
	char ch=getchar();
	while(ch!='\n'){
		if(ch!=' '){
			int now=0;
			if(ch!='-'){		//������Ǹ��� 
				while(ch!=' ' && ch!='\n'){
					now=(ch-'0')+now*10;
					ch=getchar();
				}
			}
			else if(ch=='-'){
				ch=getchar();
				while(ch!=' ' && ch!='\n'){
					now=(ch-'0')+now*10;
					ch=getchar();
				}
				now=-1*now;
			}
			ques[len++]=now;
		}
		if(ch!='\n')
		ch=getchar();	
	}
	for(i=1;i<len-1;i+=2){
		if(ques[i+1]!=0){
			if(tag)
			cout<<' ';
			cout<<ques[i]*ques[i+1]<<' '<<ques[i+1]-1;
			tag=1;
		}
	} 
	//cout<<ques[i]*ques[i+1]<<' '<<ques[i+1]-1;
	return 0;
} */

//�ο� 
/*#include <cstdio>
int main(){
	int a,b;
	int flag = 0;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b!=0){		//���ϵ����Ϊ0 
			if(flag == 0)printf("%d",a*b);	//��һ��ǰ��û�пո� 
			else printf(" %d",a*b);			//������ǰ���пո� 
			printf(" %d",b-1);
			flag = 1;
		}
	}
	if(flag==0)printf("0 0");
	return 0;
} */ 

/*����һ��δ֪���ȵ��������飬�Իس���β*/
/*�������ո��������һ������*/ 
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  int array[100];
  int i=0;
  int sum=0;
  char y;
  printf("������������������س���������ͳ�����\n");
   do
   {
    cin>>array[i];
    i++;
   }while(y=getchar()!='\n');         //�����ж��Ƿ��˻س�

  for(int j=0;j<i;j++)
  {
       sum =sum+array[j];
  }
  printf("��� = %d \n", sum); 
   return 0;
}
