/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool pd(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}

int main(){
	int n,m;cin>>n;
	int a[9999]={0},i;
	for(i=1;i<=n;i++){
		int k;cin>>k;
		a[k]=i;
	}
	cin>>m;
	for(i=0;i<m;i++){
		int k2;cin>>k2;
		printf("%04d: ",k2);
		if(a[k2]==0)
			cout<<"Are you kidding?";
		else if(a[k2]==-1)
			cout<<"Checked";
		else if(a[k2]==1)
			cout<<"Mystery Award";
		else if(pd(a[k2]))
			cout<<"Minion";
		else
			cout<<"Chocolate";
		if(a[k2]!=0)a[k2]=-1;
		cout<<endl;
	}
	return 0;
} 
