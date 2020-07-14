/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
	int n[26]={0};
	int i,max=-1,z=-1;
	char ch=getchar(); 
	while(ch!='\n'){
		ch=tolower(ch);
		if(ch>='a' && ch<='z'){
			n[ch-'a']++;
		}
		ch=getchar();
	}
	for(i=0;i<26;i++){
		if(n[i]>max){
			max=n[i];
			z=i;
		}
	}
	//printf("%d",'a');
	printf("%c %d",z+97,n[z]);
	return 0;
} 
