/*结果：		全部通过	*/

#include<cstdio>
using namespace std;

int f(int a,int b,int c){
	return a*493+b*29+c;
}

int main(){
	int G1,S1,K1,G2,S2,K2;
	scanf("%d.%d.%d %d.%d.%d",&G1,&S1,&K1,&G2,&S2,&K2);
	int sale=f(G1,S1,K1);
	int give=f(G2,S2,K2);
	int a=give-sale;
	if(a<0){
		printf("-");
		a=-a;
	}
	printf("%d.%d.%d",a/493,(a%493)/29,a%29);
	return 0;
}
