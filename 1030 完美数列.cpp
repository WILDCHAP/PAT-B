/*�ο���	https://blog.csdn.net/hy971216/article/details/80554897*/
/*�����	ȫ��ͨ��	*/ 

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int N,p,i,j,k=0;cin>>N>>p;
	double a[100000];
	for(i=0;i<N;i++){
		cin>>a[i];
	}
	sort(a,a+N);
	double temp,cnt=0;
	for(i=0;i<N;i++){
		temp=a[i]*(p*1.0);	//��a[i]��Ϊ��С��
		/*j=0;
		while(temp>=a[i+j+1]) j++;
		if(j>=k) k=j;*/
		for( j=cnt;j<N;j++){
            if(a[j]>temp){//��������������ˣ�����һ��Ԫ����Ϊ��Сֵ
                break;
            }
            if(j-i>=k){//����˴εĳ��ȴ�����һ�Σ��������г���
        		k = j-i+1;
        	}
        }
        cnt = j;	//��һ�������ֵֻҪ���ϴ�ûͨ���ĵ㿪ʼ 
	}
	cout<<k;
	return 0;
} 
