/*结果：		全部通过	*/ 

#include<iostream>
#include<cctype>
using namespace std;
bool tag=0;	//1代表大写字母无法输出 
int main(){
	string bro,a;
	getline(cin,bro);		//注意：题目只保证了第二行不为空，第一行可能为空
							//输入要用getline 
	cin>>a;
	if(bro.find('+')!=-1)	//上档键坏了 
		tag=1;
	for(int i=0;i<a.length();i++){
		if(tag && a[i]<='Z' && a[i]>='A'){
			continue;
		}
		if(bro.find(a[i])!=-1 || bro.find(toupper(a[i]))!=-1){
			continue;
		}
		cout<<a[i];
	}
	return 0;
} 
