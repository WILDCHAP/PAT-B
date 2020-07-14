/*结果：		全部通过	*/

#include<iostream>
#include<algorithm>
using namespace std;
struct stu{
	char id[14];
	int x,y;
}; 
int main(){
	int N,M,i;
	stu s[1001],temp;
	cin>>N;
	for(i=0;i<N;i++){
		cin>>temp.id>>temp.x>>temp.y;
		s[temp.x]=temp;
	}
	cin>>M;
	for(i=0;i<M;i++){
		int k;cin>>k;
		cout<<s[k].id<<' '<<s[k].y<<endl;
	} 
	return 0;
}
