/*�����		ȫ��ͨ��		*/ 


#include<iostream>
#include<cmath>
using namespace std;
/*����һ�������͵������б��������ڴ���2������һ����������
���� �� ż�� = ż������������������ֻ�轫��Ҫ�б��������Ϊ������
�Ҳ���ʱ��ֻ�۲��ܷ������������ӿ��б��ٶ�*/
bool pd(int n){
	if(n==1)return false;
	if(n==2)return true;
	if(n%2==0 && n!=2)return false;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0)
			return false;
	}
	return true;
} 

int main(){
	int M,N,i,k=1;
	cin>>M>>N;
	int next=0;	//����ʮ��һ���� 
	int sushu[10000];	//������ 
	for(i=2;i<100000000;i++){		//Ҫע���10000��������Χ�ܴ� 
		if(pd(i)){
			sushu[k++]=i;
			if(N+1==k)
			break;
		}
	}
	for(i=M;i<=N;i++){
		if(next%10!=0){
			cout<<' ';
		}
		else if(next){
			cout<<endl;
		}
		cout<<sushu[i];
		next++;
	}
	return 0;
} 
