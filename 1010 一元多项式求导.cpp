/*结果：		两个未通过*/



/*#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int ques[3000];		//保存问题
	//int ans[300];		//保存答案
	int len=1,i;
	bool tag=0; 
	char ch=getchar();
	while(ch!='\n'){
		if(ch!=' '){
			int now=0;
			if(ch!='-'){		//如果不是负号 
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

//参考 
/*#include <cstdio>
int main(){
	int a,b;
	int flag = 0;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b!=0){		//如果系数不为0 
			if(flag == 0)printf("%d",a*b);	//第一个前面没有空格 
			else printf(" %d",a*b);			//其他的前面有空格 
			printf(" %d",b-1);
			flag = 1;
		}
	}
	if(flag==0)printf("0 0");
	return 0;
} */ 

/*输入一个未知长度的整数数组，以回车结尾*/
/*条件：空格后面必须跟一个数字*/ 
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  int array[100];
  int i=0;
  int sum=0;
  char y;
  printf("请输入任意个数，按回车键结束，统计求和\n");
   do
   {
    cin>>array[i];
    i++;
   }while(y=getchar()!='\n');         //用于判断是否按了回车

  for(int j=0;j<i;j++)
  {
       sum =sum+array[j];
  }
  printf("求和 = %d \n", sum); 
   return 0;
}
