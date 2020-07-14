/*结果：		全部通过	*/


#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[1000];	//被除数
	int b;			//除数
	cin>>a>>b;
	int len=strlen(a);
	if(len==1){		//a只有一位 
		cout<<(a[0]-'0')/b<<' '<<(a[0]-'0')%b;
	}
	else{
		bool tag=true;
		int nownum=0,nowshang=0;	//存储当前处理的数字和根据当前的数字得出的商
		for(int i=0;i<len;i++){
			nownum=nownum*10+(a[i]-'0');	//当前数字=上一位下来的余数加这一位
			nowshang=nownum/b;
			nownum=nownum%b;	//用余数代替当前数字,用于下一循环 
			if(!(tag && !nowshang)){	//如果(首位且为0)不成立 
				cout<<nowshang;
				tag=false; 		//有输出后就不是首位 
			}
		} 
		cout<<' '<<nownum;		//最后剩的数就是余数 
	}
	return 0;
} 
