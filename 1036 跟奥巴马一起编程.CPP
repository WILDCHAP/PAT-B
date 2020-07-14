/*结果：		全部通过	*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;cin>>n;
	char ch;cin>>ch;
	int i,j;
	for(i=0;i<n;i++){
		cout<<ch;
	}
	cout<<endl;
	for(i=1;i<=(n+1)/2-2;i++){	//所有数的50%都是.5结束的，所以四舍五入只要加1就行 
		cout<<ch;
		for(j=1;j<=n-2;j++){
			cout<<' ';
		}
		cout<<ch<<endl;
	}
	for(i=0;i<n;i++){
		cout<<ch;
	}
	return 0;
}
