/*�����		ȫ��ͨ��	*/ 

#include<iostream>
using namespace std;

int main(){
	long A,DA,B,DB;
	cin>>A>>DA>>B>>DB;
	int numa=0,numb=0;
	int i=0;
	while(A!=0){
		if(A%10==DA){	//ÿ����֤��λ�� 
			numa=DA+numa*10;
		}
		A/=10;
	}
	while(B!=0){
		if(B%10==DB){	//ÿ����֤��λ�� 
			numb=DB+numb*10;
		}
		B/=10;
	}
	cout<<numa+numb;
	return 0;
} 
