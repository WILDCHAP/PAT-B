/*ע�⣺	�����⣬���������������ܴ���Int�ķ�Χ������Ҫ��Long*/
/*�����	ȫ��ͨ��		*/


#include<iostream>
using namespace std;

int main(){
	int N,i;
	cin>>N;
	long A[11],B[11],C[11];
	for(i=0;i<N;i++){
		cin>>A[i]>>B[i]>>C[i];
	}
	for(i=0;i<N;i++){
		cout<<"Case #"<<i+1;
		if(A[i]+B[i]>C[i]){
			cout<<": true";
		}
		else{
			cout<<": false";
		}
		if(i!=N-1){
			cout<<endl;
		}
	}
	return 0;
} 
/*#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	long A,B,C;
	for(int i=0;i<N;i++){
		cin>>A>>B>>C;
		cout<<"Case #"<<i+1;
		if(A+B>C){
			cout<<": true";
		}
		else{
			cout<<": false";
		}
		if(i!=N-1){
			cout<<endl;
		}
	}
	return 0;
} */
