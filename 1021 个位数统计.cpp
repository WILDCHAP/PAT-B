/*结果：		全部通过	*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char n[1000];	//不超过1000位的正整数n
	cin>>n;
	int len=strlen(n),i; 
	int num[10];		//0~9出现的次数(不为0才输出)
	memset(num,0,sizeof(int)*10);  
	for(i=0;i<len;i++){
		num[n[i]-'0']++;
	}
	for(i=0;i<10;i++){
		if(num[i]){
			cout<<i<<':'<<num[i]<<endl;
		}
	}
	return 0;
} 
