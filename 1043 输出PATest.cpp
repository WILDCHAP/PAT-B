/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

bool pd(int n[]){
	for(int i=0;i<6;i++)
		if(n[i])return true;
	return false;
}

int main(){
	char ch,c[6]={'P','A','T','e','s','t'};
	int n[6]={0},i;
	ch=getchar();
	while(ch!='\n'){
		switch(ch){
			case 'P':
				n[0]++;
				break;
			case 'A':
				n[1]++;
				break;
			case 'T':
				n[2]++;
				break;
			case 'e':
				n[3]++;
				break; 
			case 's':
				n[4]++;
				break;
			case 't':
				n[5]++;
				break;
			default:
				break;
		}
		ch=getchar();
	}
	while(pd(n)){
		for(i=0;i<6;i++){
			if(n[i]){
				n[i]--;cout<<c[i];
			}
		}
	}
	return 0;
} 
