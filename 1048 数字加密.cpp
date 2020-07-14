/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	char a[100],b[100],ans[100];
	char str[]={'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
	cin>>a>>b;
	int la=strlen(a),lb=strlen(b);
	int i=la-1,j=lb-1,pos=1,k=0;
	while(i>=0 && j>=0){
		int na=a[i]-'0';
		int nb=b[j]-'0',n;
		if(pos%2!=0){
			n=(na+nb)%13;
			ans[k++]=str[n];
		}
		else{
			n=nb-na;
			if(n<0)	n=n+10;
			ans[k++]=str[n];
		}
		i--;j--;pos++;
	}
	while(i>=0){
		if(pos%2!=0)	//奇数位相加 
		ans[k++]=str[a[i]-'0'];
		else{		//偶数维相减 
			if(a[i]!='0')
			ans[k++]=str[-1*(a[i]-'0')+10];
			else
			ans[k++]='0';
		}
		i--;pos++;
	}
	while(j>=0){ans[k++]=str[b[j]-'0'];j--;	//b如果比a长，由于b-0=b+0，直接加入 
	}
	for(i=k-1;i>=0;i--){
		cout<<ans[i];
	}
	cout<<endl;
	return 0;
} 
