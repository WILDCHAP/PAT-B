/*�����		ȫ��ͨ��	*/


#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[1000];	//������
	int b;			//����
	cin>>a>>b;
	int len=strlen(a);
	if(len==1){		//aֻ��һλ 
		cout<<(a[0]-'0')/b<<' '<<(a[0]-'0')%b;
	}
	else{
		bool tag=true;
		int nownum=0,nowshang=0;	//�洢��ǰ��������ֺ͸��ݵ�ǰ�����ֵó�����
		for(int i=0;i<len;i++){
			nownum=nownum*10+(a[i]-'0');	//��ǰ����=��һλ��������������һλ
			nowshang=nownum/b;
			nownum=nownum%b;	//���������浱ǰ����,������һѭ�� 
			if(!(tag && !nowshang)){	//���(��λ��Ϊ0)������ 
				cout<<nowshang;
				tag=false; 		//�������Ͳ�����λ 
			}
		} 
		cout<<' '<<nownum;		//���ʣ������������ 
	}
	return 0;
} 
