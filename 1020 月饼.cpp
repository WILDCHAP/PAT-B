/*ע�⣺		������͵������Ҳ�����float��double,��Ȼ��ȷ�Ȳ�,�����*/
/*�����		ȫ��ͨ��	*/

#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct pro{
	float stock;
	float sale;
	float single;
}pro;

bool cmp(pro a,pro b){
	return a.single>b.single;
}

int main(){
	int type,need;			//�������������� 
	int stock[1000];		//����� 
	int sale[1000];			//���ۼ�
	int i;
	cin>>type>>need;
	vector<pro> a(type+1);
	for(i=1;i<=type;i++){		//�������ݲ�����ƽ���ۼ� 
		cin>>a[i].stock;
	} 
	for(i=1;i<=type;i++){
		cin>>a[i].sale;
		a[i].single=(a[i].sale)/(a[i].stock);
	} 
	sort(a.begin()+1,a.end(),cmp);
	//cout<<a[1].stock<<' '<<a[2].stock<<' '<<a[3].stock;
	//while(need && a[type].stock){	
	float money=0;	
	for(i=1;i<=type;i++){		//�������һ����ڿ������ 
		if(a[i].stock<=need){		//��ǰ��������治�� 
			money+=a[i].sale;
		}
		else{						//��ǰ��������湻 
			money+=need*a[i].single;
			break;
		}
		need-=a[i].stock;
	}
	printf("%.2f",money); 
	return 0;
} 
