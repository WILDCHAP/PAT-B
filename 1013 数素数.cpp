/*结果：		全部通过		*/ 


#include<iostream>
#include<cmath>
using namespace std;
/*定义一个布尔型的素数判别函数，由于大于2的素数一定是奇数，
奇数 × 偶数 = 偶数（不是素数），故只需将需要判别的数输入为奇数，
且测试时仍只观察能否被奇数整除，加快判别速度*/
bool pd(int n){
	if(n==1)return false;
	if(n==2)return true;
	if(n%2==0 && n!=2)return false;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0)
			return false;
	}
	return true;
} 

int main(){
	int M,N,i,k=1;
	cin>>M>>N;
	int next=0;	//用于十个一换行 
	int sushu[10000];	//素数表 
	for(i=2;i<100000000;i++){		//要注意第10000个素数范围很大 
		if(pd(i)){
			sushu[k++]=i;
			if(N+1==k)
			break;
		}
	}
	for(i=M;i<=N;i++){
		if(next%10!=0){
			cout<<' ';
		}
		else if(next){
			cout<<endl;
		}
		cout<<sushu[i];
		next++;
	}
	return 0;
} 
