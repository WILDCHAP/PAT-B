/*�����		ȫ��ͨ��	*/ 

#include<iostream>
#include<algorithm>
using namespace std;
bool f(int a,int b){
	return a>b;
}
int main(){
	int n;cin>>n;
	int i,a[100001],ans=0;
	for(i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,f);	//�Ӵ�С�� 
	i=1;
	while(ans<=n && a[i]>i){	//�𰸱�֤������������ҳ�������Ϊa[i]�������������ڵ�ǰ���� 
		ans++;
		i++;
	}
	cout<<ans;
	return 0;
} 
