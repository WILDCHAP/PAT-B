/*结果：		全部通过	*/

#include<iostream>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	int i,k=0;
	int n1[100]={0},n2[100]={0};	//几种颜色的个数
	bool tag=1;
	for(i=0;i<a.length();i++){
		if(a[i]>='0' && a[i]<='9'){
			n1[a[i]-'0']++;
		}
		else if(a[i]>='a' && a[i]<='z'){
			n1[a[i]-'a'+10]++;
		}
		else{
			n1[a[i]-'A'+36]++;
		}
	} 
	for(i=0;i<b.length();i++){
		if(b[i]>='0' && b[i]<='9'){
			n2[b[i]-'0']++;
		}
		else if(b[i]>='a' && b[i]<='z'){
			n2[b[i]-'a'+10]++;
		}
		else{
			n2[b[i]-'A'+36]++;
		}
	} 
	for(i=0;i<62;i++){
		if(n2[i]){	//需要这个颜色 
			if(n1[i]<n2[i]){	//不够 
				tag=0;
				k=k+n2[i]-n1[i];
			}
		}
	}
	if(tag){
		cout<<"Yes "<<a.length()-b.length();
	}
	else{
		cout<<"No "<<k;
	}
	return 0;
} 
