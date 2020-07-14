/*结果：		全部通过	*/

#include<iostream>
using namespace std;

int main(){
	int N;
	char ch;
	cin>>N>>ch;
	if(!N){
		cout<<0;
		return 0;
	}
	int beg=1,sum=1;
	while(sum<=(N+1)/2){
		beg+=2;
		sum+=beg;
	}
	beg-=2;
	cout<<beg<<" "<<sum;
	for(int i=beg;i>=1;i=i-2){	//打印上方 
		for(int j=1;j<=(beg-i)/2;j++){	//打印空格 
			cout<<' ';
		}
		for(int k=1;k<=i;k++){
			cout<<ch;
		}
		cout<<endl;
	}
	for(int i=3;i<=beg;i=i+2){	//打印下方 
		for(int j=1;j<=(beg-i)/2;j++){	//打印空格 
			cout<<' ';
		}
		for(int k=1;k<=i;k++){
			cout<<ch;
		}
		cout<<endl;
	}
	cout<<N-2*(sum-beg-2)+1;
	return 0;
} 
