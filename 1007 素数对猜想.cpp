/*�����		ȫ��ͨ��	*/

#include<iostream>
#include<cmath> 
using namespace std;

bool pd(int n){
	if(n==1)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}

int main(){
	int N,num=0;
	cin>>N;
	int now=2;
	while(now<=N){
		if(pd(now)){	//������������� 
			if(pd(now+2) && (now+2)<=N)	//ֱ�ӿ���֮�������ǲ������� 
				num++;
		}
		now++;
	}
	cout<<num;
	return 0;
} 
