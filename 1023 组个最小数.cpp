/*结果：		全部通过	*/

#include<iostream>
using namespace std;

int main(){
	int num[10]={0};	//记录0~9分别有多少个
	int i;
	bool tag=true;		//用来标识第一个是否已经输出了 
	for(i=0;i<10;i++){
		cin>>num[i];
		if(num[i]){	//如果这个数有超过0个 
			int k=num[i];
			if(i){		//这个数不是0,如果0有且没输出(也就是tag=true && num[0])
				if(tag && num[0]) {	//输出一个该数后输出所有0,再输出该数 
					cout<<i;k--;
					while(num[0]--){
						cout<<0;
					}
					while(k--){
						cout<<i;
					}
				}
				else{
					while(k--){
						cout<<i;
					}
				}
				tag=false;
			}
		}
	} 
	if(tag)cout<<0;
	return 0;
} 
