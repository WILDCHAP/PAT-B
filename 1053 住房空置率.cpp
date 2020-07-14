/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n,d;cin>>n;
	double e;cin>>e>>d;
	int i,j,n1=0,n2=0;
	for(i=0;i<n;i++){
		cin>>j;int a=0;//低于某给定的阈值 e的天数和超过某给定阈值的天数 
		for(int k=0;k<j;k++){
			double z;
			cin>>z;
			if(z<e)a++;
		}
		if(a>(j/2)){
			if(j>d){
				n2++;
			}else n1++;
		}
	}
	printf("%.1lf%% %.1lf%%\n", (double)n1 / n * 100, (double)n2 / n * 100);  
	return 0;
} 
