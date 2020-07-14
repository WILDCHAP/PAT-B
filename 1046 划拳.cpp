/*结果：		全部通过	*/

#include<iostream>
using namespace std;

int main(){
	int a1,b1,a2,b2;
	int n,i;cin>>n;
	int al=0,bl=0;
	for(i=0;i<n;i++){
		bool t1=1,t2=1;
		cin>>a1>>b1>>a2>>b2;
		int sum;
		sum=a1+a2;
		if(b1==sum)t2=0;
		if(b2==sum)t1=0;
		if(!t1 && t2)	al++;
		if(t1 && !t2)	bl++;
	}
	cout<<al<<' '<<bl;
	return 0;
} 
