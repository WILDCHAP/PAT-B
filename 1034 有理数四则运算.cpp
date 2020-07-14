/*参考：https://www.jianshu.com/p/5303f2431f05*/
/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
using namespace std;
long minyue(long n,long m){
	if(!n || !m)return 1;	//注意！ 
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
	if(b==0){	//分母为0 
		cout<<"Inf";return ;
	}
	int fuhao=1;
	if(a<0){
		a=-a;fuhao=-1*fuhao;
	}
	if(b<0){
		b=-b;fuhao=-1*fuhao;
	}
	long k=minyue(a,b);		//都除以最小公约数，划简 
	a=a/k;
	b=b/k;
	//输出
	if(fuhao<0)	cout<<"(-";
	if(a/b && a%b){	//真分 
		printf("%ld %ld/%ld",a/b,a%b,b);
	} 
	else if(a%b){	//假分 
		printf("%ld/%ld",a,b);
	}
	else{			//整数 
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
/*int minpol(int m,int n){	//求最小公倍数 
	int w,z;
	w=n*m;  	//最小公倍数=两数乘积/最大公约数                  
	while(m!=0)	//先求最大公约数 
	{
		if(n<m)	//确保n>=m，即余数要有 
		{
			int p=n;
			n=m;
			m=p;
		}
		t=n%m;
		n=m;	//n用原来的m更新 
		m=t;	//m用n%m更新 
	}
	z=w/n;	//利用求出的最大公约数求出最小公倍数 
	return z;
}*/

