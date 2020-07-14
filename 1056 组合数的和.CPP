/*结果：	全部通过	*/

#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int num[11],i,j;
	for(i=1;i<=n;i++)cin>>num[i];
	int sum=0;
	for(i=1;i<=n;i++){	//十位 
		for(j=1;j<=n;j++){
			if(i!=j){
				sum+=num[i]*10+num[j];
			}
		}		//个位 
	}
	cout<<sum;
	return 0;
} 
