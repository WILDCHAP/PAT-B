/*�����		ȫ��ͨ��	*/ 

#include<iostream>
#include<cctype>
using namespace std;
bool tag=0;	//1�����д��ĸ�޷���� 
int main(){
	string bro,a;
	getline(cin,bro);		//ע�⣺��Ŀֻ��֤�˵ڶ��в�Ϊ�գ���һ�п���Ϊ��
							//����Ҫ��getline 
	cin>>a;
	if(bro.find('+')!=-1)	//�ϵ������� 
		tag=1;
	for(int i=0;i<a.length();i++){
		if(tag && a[i]<='Z' && a[i]>='A'){
			continue;
		}
		if(bro.find(a[i])!=-1 || bro.find(toupper(a[i]))!=-1){
			continue;
		}
		cout<<a[i];
	}
	return 0;
} 
