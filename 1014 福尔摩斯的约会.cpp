/*isalpha():判断是否是英文字母*/
/*特别注意题设文字！！！*/
/*结果：		全部通过	*/


#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char date[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	char test[4][61];
	cin>>test[0]>>test[1]>>test[2]>>test[3];
	int len0=strlen(test[0]),len1=strlen(test[1]);
	int len2=strlen(test[2]),len3=strlen(test[3]);
	bool tag=1;		//是否是第一对 
	int i=0,k=0;
	while(i<len0 && i<len1){
		if(test[0][i]==test[1][i]){
			if(tag){		//第1对相同的大写英文字母
				if('A'<=test[0][i] && test[0][i]<='G') {
					cout<<date[test[0][i]-'A']<<' ';
					tag=0;
				}
			}
			else if(!tag){ 	//第 2 对相同的字符
				if('0'<=test[0][i] && test[0][i]<='9'){
					cout<<0<<test[0][i]<<':'; 
					break;
				}
				else if('A'<=test[0][i] && test[0][i]<='N'){
					cout<<10+(test[0][i]-'A')<<':';
					break;
				}
			}
		}
		i++;
	}
	i=0;
	while(i<len2 && i<len3){
		if(test[2][i]==test[3][i] && isalpha(test[2][i])){//第 1 对相同的英文字母
			if(i<10)
				cout<<'0';
			cout<<i;
			break;	
		}
		i++;
	}
	return 0;
} 
