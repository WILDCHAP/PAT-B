/*注意：		题目没说M一定大于N，所以要M%=N来确保M>N	*/ 
/*结果：		全部通过	*/ 

#include<iostream>
using namespace std;

void reserve(int *num,int beg,int end){
	int n;
	for(int i=beg,j=end;i<j;++i,--j){
		n=num[i];
		num[i]=num[j];
		num[j]=n;
	}
}

int main(){
	int N,M;	//数组长度N,后M个前移
	cin>>N>>M;
	int num[101];
	int i;
	for(i=0;i<N;i++) {
		cin>>num[i];
		//num[i]=i+1;
	}
	M%=N;		//这一句确保M>N 
	reserve(num,0,N-M-1);
	reserve(num,N-M,N-1);
	reserve(num,0,N-1);
	for(i=0;i<N-1;i++) {
		cout<<num[i]<<' ';
	}
	cout<<num[i];
	
	return 0;
} 
