/*˼·�ο���https://blog.csdn.net/oShuaiFeng/article/details/80622269*/
/*��a,b,c������A	Ȼ�����˷�	*/ 
/*�����	ȫ��ͨ��	*/


#include<iostream> 
#include<cstring>
using namespace std;

int main(){
	int N;	cin>>N;
	char test[10][101];
	for(int i=0;i<N;i++){
		cin>>test[i];
		int size=strlen(test[i]);
		//cout<<size;
		int FR=0,MI=0,BK=0;		//��¼Pǰ��P,T�У�T�� A�ĸ��� 
		int p=0,a=0,t=0;		//��¼p,a,t�ĸ���(��ĿҪ��a,tֻ����1��,a����Ϊ0) 
		int now=1;				//��ǰλ�ã�1ǰ  2��  3�� 
		for(int j=0;j<size;j++){
			if(test[i][j]=='A'){
				a++;
			}
			else if(test[i][j]=='P'){
				p++;
				now=2;
			}
			else if(test[i][j]=='T'){
				t++;
				now=3;
			}
			else{		//�����˳�p,a,t֮����ַ�����BK��0 
				BK=0;
				break;
			}
			switch(now){
				case 1:
					FR++;
					break;
				case 2:
					MI++;
					break;
				case 3:
					BK++;
					break;
			}
		}
		if(a && p==1 && t==1 && FR*(MI-1)==(BK-1)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
