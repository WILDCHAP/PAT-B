/*�����		ȫ��ͨ��	*/

#include<iostream>
using namespace std;

int main(){
	int num[10]={0};	//��¼0~9�ֱ��ж��ٸ�
	int i;
	bool tag=true;		//������ʶ��һ���Ƿ��Ѿ������ 
	for(i=0;i<10;i++){
		cin>>num[i];
		if(num[i]){	//���������г���0�� 
			int k=num[i];
			if(i){		//���������0,���0����û���(Ҳ����tag=true && num[0])
				if(tag && num[0]) {	//���һ���������������0,��������� 
					cout<<i;k--;
					while(num[0]--){
						cout<<0;
					}
					while(k--){
						cout<<i;
					}
				}
				else{
					while(k--){
						cout<<i;
					}
				}
				tag=false;
			}
		}
	} 
	if(tag)cout<<0;
	return 0;
} 
