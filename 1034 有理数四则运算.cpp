/*�ο���https://www.jianshu.com/p/5303f2431f05*/
/*�����		ȫ��ͨ��	*/

#include<iostream>
#include<cstdio>
using namespace std;
long minyue(long n,long m){
	if(!n || !m)return 1;	//ע�⣡ 
	while(m!=0){
		if(n<m){
			int p=n;
			n=m;m=p;
		}
		int t=n%m;
		n=m;
		m=t;
	}
	return n;
}

void printfnum(long a,long b){
	if(b==0){	//��ĸΪ0 
		cout<<"Inf";return ;
	}
	int fuhao=1;
	if(a<0){
		a=-a;fuhao=-1*fuhao;
	}
	if(b<0){
		b=-b;fuhao=-1*fuhao;
	}
	long k=minyue(a,b);		//��������С��Լ�������� 
	a=a/k;
	b=b/k;
	//���
	if(fuhao<0)	cout<<"(-";
	if(a/b && a%b){	//��� 
		printf("%ld %ld/%ld",a/b,a%b,b);
	} 
	else if(a%b){	//�ٷ� 
		printf("%ld/%ld",a,b);
	}
	else{			//���� 
		printf("%d",a/b);
	}
	if(fuhao<0)	cout<<")";
}

int main(){
	long a1,b1,a2,b2;
	scanf("%ld/%ld %ld/%ld",&a1,&b1,&a2,&b2);
	char opr[4]={'+','-','*','/'};
	for(int i=0;i<4;i++){
		printfnum(a1,b1);
		printf(" %c ",opr[i]);
		printfnum(a2,b2);
		printf(" = ");
		switch(opr[i]){
			case '+':printfnum(a1*b2+a2*b1,b1*b2);
						break;
			case '-':printfnum(a1*b2-a2*b1,b1*b2);
						break;
			case '*':printfnum(a1*a2,	   b1*b2);
						break;
			case '/':printfnum(a1*b2,	   b1*a2);
						break;
		}
		cout<<endl;
	}
	return 0;
} 
/*int minpol(int m,int n){	//����С������ 
	int w,z;
	w=n*m;  	//��С������=�����˻�/���Լ��                  
	while(m!=0)	//�������Լ�� 
	{
		if(n<m)	//ȷ��n>=m��������Ҫ�� 
		{
			int p=n;
			n=m;
			m=p;
		}
		t=n%m;
		n=m;	//n��ԭ����m���� 
		m=t;	//m��n%m���� 
	}
	z=w/n;	//������������Լ�������С������ 
	return z;
}*/

