/*结果：		全部通过	*/

#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int gewei=N%10;
	int shiwei=(N%100)/10;
	int baiwei=N/100;
	int i;
	for(i=1;i<=baiwei;i++){
		cout<<'B';
	}
	for(i=1;i<=shiwei;i++){
		cout<<'S';
	}
	for(i=1;i<=gewei;i++){
		cout<<i;
	}
	return 0;
} 
