/*�����	ȫ��ͨ��	*/

#include<iostream>
#include<cstring>
using namespace std;

void prin(char *a,int beg,int end){
	for(int i=beg;i<=end;i++){
		cout<<a[i];
	}
}

int main(){
	char fuhao1,fuhao2;	//һ�������ķ���,һ����ָ���ķ��� 
	cin>>fuhao1;
	if(fuhao1=='-')cout<<'-';	//�������,���Ų����
	char num[9999];
	cin>>num;
	int len=strlen(num);
	int pos=len;	//С����λ��
	int beg=0,end=len-1;//���ֿ�ʼ-����λ�� 
	int EX=0;			//EX�Ĵ�С,Ҳ����С����Ҫ��ǰ/���ƶ�����λ
	int pd=1;			//EX�ķ��� 
	int i,k=end,z;
	for(i=0;i<len;i++){		//��ȡλ�� 
	 	if(num[i]=='.')	pos=i;
	 	if(num[i]=='E')	{
	 		end=i-1;
	 		switch(num[i+1]){	//E����ķ��� 
	 			case '+':	pd=1;break;
	 			case '-':	pd=-1;break;
	 		}
	 		i=i+2;
	 		while((k+1)!=i){	//��ʼ����EX 
	 			EX=EX*10+(num[i]-'0'); 
	 			i++;
	 		}
	 		break;
	 	}
	} 
	//cout<<beg<<' '<<end<<' '<<pos<<' '<<EX;
	//1.EXΪ����С������ǰ�ƣ�ǰ��������(pos-beg)λ
	//	1). (pos-beg)>(-EX) 	��ʱ����Ҫ��ǰ�油0
	//	2).	 Ҫ��ǰ�油0
	//2.EXΪ����С��������ƣ�����������(end-pos)λ
	//	1).	(end-pos)>=(EX)		��ʱ����Ҫ�ں��油0
	//	2).	 Ҫ�ں��油0
	if(pd<0){	//EXΪ��
		if((pos-beg)>EX){
			/*for(i=0;i>EX;i--){		//��ǰ��EXλ 
				k=num[i+pos];
				num[i+pos]=num[i+pos-1];
				num[i+pos-1]=k;
			}*/
			prin(num,beg,pos-EX-1);
			if(pos!=len)cout<<'.';	//С�����������
			prin(num,pos-EX,pos-1); 
			prin(num,pos+1,end); 
		}
		else{
			cout<<"0.";z=EX-pos-beg;
			while(z--)	cout<<'0';
			prin(num,beg,pos-1);
			prin(num,pos+1,end); 
		} 
	}
	//+0.023E+02	02.3
	else{	//EXΪ�� 
		if((end-pos)>EX){
			if(!(pos-1==beg && num[beg]=='0'))	//�ر�ע��0.�������,��ʱ�����Ʋ��ܱ������0 
			{
				prin(num,beg,pos-1);
				prin(num,pos+1,pos+EX);
			}
			else{
				k=pos;
				while(num[k+1]=='0')k++;
				prin(num,k+1,pos+EX);
			}
			bool tag=true;
			for(i=beg;i<=pos+EX;i++)
				if(num[i]!='0')tag=false;
			if(!tag)cout<<'.';
			prin(num,pos+1+EX,end); 
		}
		else{
			if(!(pos-1==beg && num[beg]=='0'))	//�ر�ע��0.�������,��ʱ�����Ʋ��ܱ������0 
				prin(num,beg,pos-1);
			prin(num,pos+1,end); z=EX-(end-pos);
			while(z--)	cout<<'0'; 
		} 
	}
	return 0;
} 
