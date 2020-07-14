/*结果：	全部通过*/

#include<iostream>
using namespace std;

int main(){
	int N;
	int num=0;
	cin>>N;	
	while(N!=1){
		if(N%2!=0){			//奇数是（3N+1）砍一半 
			N=3*N+1; 
		}
		N/=2;
		num++;
	}
	cout<<num;
	return 0;
} 
