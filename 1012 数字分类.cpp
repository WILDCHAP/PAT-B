/*�����		ȫ��ͨ��		*/


#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int N,i,now;
	cin>>N;
	int A[6]; 
	float a4num=0;		//��¼����a4�������� 
	bool t[6];			//����ȷ�����������Ƿ񶼳��ֹ� 
	bool tag=1;			//����A2ǰ��ķ��� 
	for(i=0;i<6;i++){		//��ʼ������ 
		A[i]=0;
		t[i]=0;
	}
	for(i=0;i<N;i++){		//�������� 
		cin>>now;
		if(now%5==0 && now%2==0){	//A1:�ܱ� 5 ����������������ż���ĺ�
			A[1]+=now;
			t[1]=1;
		}
		if(now%5==1){				//A2:����5������1�����ְ�����˳����н������
			if(tag)	A[2]+=now;
			else	A[2]-=now;
			t[2]=1;tag=!tag;
		}
		if(now%5==2){				//A3:�� 5 ������ 2 �����ֵĸ���
			A[3]++;
			t[3]=1;
		}
		if(now%5==3){				//A4:�� 5 ������ 3 �����ֵ�ƽ����
			A[4]+=now;
			a4num++;
			t[4]=1;
		}
		if(now%5==4){				//A5:�� 5 ������ 4 ���������������
			if(A[5]<now){
				A[5]=now;
				t[5]=1;
			}
		}
	}
	
	for(i=1;i<=5;i++){
		if(i!=1)
			cout<<' ';
		if(i!=4){
			if(t[i]){
			cout<<A[i];
			}
			else{
				cout<<'N';
			}
		}
		else{
			if(t[i]){
				printf("%.1f",(A[4]*1.0)/a4num);
			}
			else{
				cout<<'N';
			}
		}
	} 
	return 0;
} 
