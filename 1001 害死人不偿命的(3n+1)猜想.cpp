/*�����	ȫ��ͨ��*/

#include<iostream>
using namespace std;

int main(){
	int N;
	int num=0;
	cin>>N;	
	while(N!=1){
		if(N%2!=0){			//�����ǣ�3N+1����һ�� 
			N=3*N+1; 
		}
		N/=2;
		num++;
	}
	cout<<num;
	return 0;
} 
