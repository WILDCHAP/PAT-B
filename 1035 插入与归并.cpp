/*�ο���https://blog.csdn.net/qq_40946921/article/details/81293371*/
/*�����		ȫ��ͨ��	*/ 

#include<iostream>
#include<algorithm>
using namespace std;
int n;

void insort(int a[],int b[]){
	bool tag=0; 
	for(int i=2;i<=n;i++){
		sort(a,a+i);	//��ǰi������ 
		if(tag){	//��� 
			cout << "Insertion Sort" << endl;	//�����һ�ε����� 
			cout << a[0];
			for (int j = 1; j < n; j++)
				cout << " " << a[j];
			return ;
		}
		if(equal(a,a+n,b)){	//���������������е�һ�����к�bƥ�� 
			tag=1;
		} 
	}
}
void mergesort(int a[],int b[]){
	bool tag=0;
	for(int i=2;;i=i*2){	//ȷ���鲢�����k(��+�Ҹ���)��ÿ��*2 
		for(int j=0;j<n;j=j+i){	//ȷ��k���һ�׼�㣬�ֱ�����k������ 
			if(j+i<n)	//�±��ڷ�Χ�� 
				sort(a+j,a+j+i);
			else		//�±곬����Χ(��ĩβ����) 
				sort(a+j,a+n);
			//sort(a+j,a + (j + i < n ? j + i : n));
		}
		if (tag) {
			cout << "Merge Sort" << endl;
			cout << a[0];
			for (int j = 1; j < n; j++)
				cout << " " << a[j];
			return;
		}
		if (equal(a, a + n, b))
			tag = 1;
		if (i > n)	//i>nʱ��һ�κ���� 
			break;
	}
}

int main(){
	cin>>n;
	int a1[100],a2[100],b[100];
	for(int i=0;i<n;i++){
		cin>>a1[i];
		a2[i]=a1[i];
	}
	for(int j=0;j<n;j++)cin>>b[j]; 
	insort(a1,b);
	mergesort(a2,b);
	return 0;
} 
