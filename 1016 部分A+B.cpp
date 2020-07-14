/*结果：		全部通过	*/ 

#include<iostream>
using namespace std;

int main(){
	long A,DA,B,DB;
	cin>>A>>DA>>B>>DB;
	int numa=0,numb=0;
	int i=0;
	while(A!=0){
		if(A%10==DA){	//每次验证个位数 
			numa=DA+numa*10;
		}
		A/=10;
	}
	while(B!=0){
		if(B%10==DB){	//每次验证个位数 
			numb=DB+numb*10;
		}
		B/=10;
	}
	cout<<numa+numb;
	return 0;
} 
