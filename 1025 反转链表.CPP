/*参考：https://blog.csdn.net/livecoldsun/article/details/36899291*/
/*结果：		全部通过	*/ 

#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

struct node{
	int pos;	//结点地址
	int data;	//数据
	int next;	//下一节点地址 
};

int main(){
	vector<node> vin(100000);	//输入数据，数据起始地点直接储存到相应下标上去；
	vector<node> sort;			//保存排序后的结果
	vector<node> vout;			//保存输出的结果 
	node temp;
	int first,N,K;
	cin>>first>>N>>K;
	for(int i=0;i<N;i++){
		cin>>temp.pos>>temp.data>>temp.next;
		vin[temp.pos]=temp;
	}
	if(first==-1){			//起始地址是-1直接输出 
		cout<<"-1";
	} 
	else{
		int now=first;
		while(now!=-1){		//循环将链表串起来 
			sort.push_back(vin[now]);
			now=vin[now].next;
		}
		int lensort=sort.size();	//获取排序后的链表长度
		int right=K-1;		//依次从(下标)0~k-1,k~2*k-1.....转置直到right>（lensort-1） 
		while(right<lensort){
			for(int i=right;i>right-K;i--){	//转置 
				vout.push_back(sort[i]);
			}
			right+=K;
		} 
		for(int i=right-K+1;i<lensort;i++){	//把剩下不需要转置的入 
			vout.push_back(sort[i]);
		}
		for(int i=0;i<lensort;i++){
			if(i!=lensort-1){
				vout[i].next=vout[i+1].pos;
				printf("%05d %d %05d\n",vout[i].pos,vout[i].data,vout[i].next);
			}
			else{
				vout[i].next=-1;
				printf("%05d %d %d\n",vout[i].pos,vout[i].data,vout[i].next);
			}
		}
	}
	return 0;
}
