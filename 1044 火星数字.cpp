/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int change(string s){
	int n=0;
	for(int i=0;i<s.length();i++){
		n=n*10+s[i]-'0';
	}
	return n;
}

int main(){
	string gewei[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep",
						"oct","nov","dec"};
	string dawei[12]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok",
						"mer","jou"};
	int n,i;cin>>n;
	string s;
	getchar();		//getline会将第一次cinN的回车读入 
	for(i=0;i<n;i++){
		//cin>>s;
		getline(cin,s);
		if(s[0]>='0' && s[0]<='9'){		//地球文--火星文 
			int k=change(s);
			if(k/13){
				cout<<dawei[k/13-1];
				if(k%13)
				cout<<' '<<gewei[k%13];
			}
			else{
				//if(k%13 || !k)
				cout<<gewei[k];
			}
		}
		else{
			int k=0;string temp="";
			for(int zz=0;zz<s.length();zz=zz+4){
				temp="";
				temp=temp+s[zz]+s[zz+1]+s[zz+2];
				for(int j=0;j<13;j++){
					if(temp==dawei[j]){
						k=k+(j+1)*13;
					}
					//if(j!=12)
					if(temp==gewei[j]){
						k=k+j;
					}
				}
			}
			cout<<k;
		}
		cout<<endl;
	}
	return 0;
} 
