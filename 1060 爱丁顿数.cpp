/*结果：		全部通过	*/ 

#include<iostream>
#include<algorithm>
using namespace std;
bool f(int a,int b){
	return a>b;
}
int main(){
	int n;cin>>n;
	int i,a[100001],ans=0;
	for(i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,f);	//从大到小排 
	i=1;
	while(ans<=n && a[i]>i){	//答案保证在最大天数内且超过长度为a[i]的骑行天数多于当前天数 
		ans++;
		i++;
	}
	cout<<ans;
	return 0;
} 
