/*参考：https://blog.csdn.net/qq_40946921/article/details/81293371*/
/*结果：		全部通过	*/ 

#include<iostream>
#include<algorithm>
using namespace std;
int n;

void insort(int a[],int b[]){
	bool tag=0; 
	for(int i=2;i<=n;i++){
		sort(a,a+i);	//将前i个排序 
		if(tag){	//输出 
			cout << "Insertion Sort" << endl;	//输出下一次的序列 
			cout << a[0];
			for (int j = 1; j < n; j++)
				cout << " " << a[j];
			return ;
		}
		if(equal(a,a+n,b)){	//如果插入排序过程中的一个序列和b匹配 
			tag=1;
		} 
	}
}
void mergesort(int a[],int b[]){
	bool tag=0;
	for(int i=2;;i=i*2){	//确定归并排序的k(左+右个数)，每次*2 
		for(int j=0;j<n;j=j+i){	//确定k后找基准点，分别向右k个排序 
			if(j+i<n)	//下标在范围内 
				sort(a+j,a+j+i);
			else		//下标超过范围(最末尾那组) 
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
		if (i > n)	//i>n时排一次后结束 
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
