/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
using namespace std;

bool pd(int a,int b){
	if(a<=0 || a>b)return false;
	return true;
}

int getch(char a[][4]){
	char ch;int i=0,j=0;
	while((ch=getchar())!='\n'){
		if(ch=='['){
			while((ch=getchar())!=']'){
				if(ch=='\n')return i;
				a[i][j++]=ch;
			}
			a[i][j]='\0';
			i++;j=0;
		}
	}
	return i;
}

int main(){
	char hand[10][4];
	char eyes[10][4];
	char mous[10][4];
	int i,j,k=0,lh=0,le=0,lm=0,n;
	lh=getch(hand);
	le=getch(eyes);
	lm=getch(mous);
	cin>>n;
	for(i=0;i<n;i++){
		int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
		if(pd(a,lh) && pd(b,le) && pd(c,lm) && pd(d,le) && pd(e,lh)){
			printf("%s(%s%s%s)%s",hand[a-1],eyes[b-1],mous[c-1],eyes[d-1],hand[e-1]);
		}
		else
		printf("Are you kidding me? @\\/@");	//注意：\输出要加转义 
		cout<<endl;
	}
	return 0;
} 

