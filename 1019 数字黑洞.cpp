/*�ر�ע�⣺	���������,��С,���Ǽ���������,��Ҫ���ǲ�0*/
/*�����		ȫ��ͨ��*/ 


#include<iostream>
#include<algorithm>
using namespace std;
int n[4];

void getn(int N){	//��ÿһλ����ֵ�����n�� 
	n[0]=N%10;
	n[1]=(N/10)%10;
	n[2]=(N/100)%10;
	n[3]=N/1000;
}
int getn(){			//��ȡ������������n 
	int now=0;
	for(int i=0;i<4;i++)
		now=now*10+n[i];
	return now; 
}
bool bigtomin (int i,int j) { return (i>j); }//��������

int main(){
	int N;cin>>N;
	getn(N);
	if(n[0]==n[1] && n[0]==n[2] && n[0]==n[3]){
		if(n[0])
			cout<<N<<" - "<<N<<" = 0000";
		else
			cout<<"0000 - 0000 = 0000";
	}
	else{
		do{
			getn(N);
			if(n[0]==n[1] && n[0]==n[2] && n[0]==n[3]){
				if(n[0])
					cout<<N<<" - "<<N<<" = 0000";
				else
					cout<<"0000 - 0000 = 0000";
			}
			sort(n,n+4);			//��С����ó���С
			int min=getn();
			sort(n,n+4,bigtomin);	//�Ӵ�С�ĳ����
			int max=getn();
			N=max-min;
			cout<<max<<" - ";
			int k=min;
			while((k/1000)==0){
				k*=10;
				cout<<'0';
			}
			cout<<min<<" = ";
			k=N;
			while((k/1000)==0){
				k*=10;
				cout<<'0';
			}
			cout<<N;
			cout<<endl;
		}while(N!=6174);
	}
	return 0;
} 
