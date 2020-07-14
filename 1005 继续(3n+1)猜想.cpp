/*解题关键：	认识到要输出的数不在其他数的子列中	*/ 
/*结果：		全部通过	*/

#include<iostream>
using namespace std;

void quicksort(int *num,int beg,int end){
	if(beg<end){
		int front=beg,rear=end;
		num[0]=num[beg];
		do{
			while(front<rear && num[rear]<num[0])
				rear--;
			if(front<rear){
				num[front]=num[rear];
				front++;
			}
			while(front<rear && num[front]>num[0])
				front++;
			if(front<rear){
				num[rear]=num[front];
				rear--;
			}
		}while(front!=rear);
		num[front]=num[0];
		quicksort(num,beg,front-1);
		quicksort(num,front+1,end);
	}
}

int main(){
	int N;		//N个数
	cin>>N;
	int num[100],i,j,k;
	bool tag[100];	//tag=true则证明存在
					//tag=false证明不存在任何一个数组其他数的子列中 
	int final[100];	//用于保存结果的数组 
	for(i=0;i<N;i++){
		cin>>num[i];
		tag[i]=false; 
	} 
	for(i=0;i<N;i++){
		if(tag[i]==true)	//剪枝 
					continue;
		k=num[i];	//记录当前数
		while(k!=1){
			if(k%2!=0){
				k=3*k+1;
			}
			k/=2;
			for(j=0;j<N;j++){	//循环去找数组里的所有数 
				if(tag[j]==true)	//剪枝 
					continue;
				if(k==num[j] && i!=j){
					tag[j]=true;
					break;
				}
			}
		} 
	}
	k=1; 
	for(i=0;i<N;i++){
		if(!tag[i]){
			final[k++]=num[i];
		}		
	} 
	quicksort(final,1,k-1);
	for(i=1;i<k-1;i++){
		cout<<final[i]<<' ';
	}
	cout<<final[k-1];
	return 0;
} 
