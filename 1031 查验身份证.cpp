/*结果：		全部通过	*/

#include<iostream>
#include<stdlib.h>
using namespace std;
bool tag=1;
int quan[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char last[11]={'1', '0', 'X', '9', '8', '7', '6', '5' ,'4', '3', '2'};
void pd(char *a){
	//int k;
	double sum=0;
	for(int i=0;i<=16;i++){
		if(a[i]<='9' && a[i]>='0'){
			sum=sum+(a[i]-'0')*(quan[i]*1.0);
		}
		else{		//出现非数字直接输出 
			cout<<a<<endl;
			tag=0;
			return ;
		}
	}
	if(last[(int)sum%11]!=a[17]){
		cout<<a<<endl;
		tag=0;
	}
}

int main(){
	int n;cin>>n;
	char a[18];
	for(int i=0;i<n;i++){
		cin>>a;
		pd(a);
	}
	if(tag)cout<<"All passed";
	//system("pause");
	return 0;
} 
