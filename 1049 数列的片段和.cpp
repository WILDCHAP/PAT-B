/*�����		ȫ��ͨ��	*/

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;cin>>n;
	double num[n],sum=0;
	int a=n,b=1;
	for(int i=0;i<n;i++){
		cin>>num[i];
		sum=sum+num[i]*a*b*1.0;		//ע�⣡a*b��ֵ��������ab���޿���Խ��Խ�������ܳ���int��Χ 
		a--;b++;
	}
	printf("%.2f",sum);
	return 0;
} 
