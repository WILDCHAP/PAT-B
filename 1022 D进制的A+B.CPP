/*结果：		全部通过	*/

#include<iostream>
using namespace std;

int main(){
	long a,b;
	cin>>a>>b;
	int d,num[32]={0},i=0;
	cin>>d;
	long c=a+b;
	if(!c)	cout<<0;
	else{
		while(c){		//被除数一直除到0为止 
			num[i]=c%d;
			i=i+1;
			c=c/d;
		}
		i--;
		//num[i]=c;
		while(i>=0)
			cout<<num[i--];
		}
	return 0;
} 
