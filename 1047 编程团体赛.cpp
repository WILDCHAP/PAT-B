/*结果：		全部通过	*/

#include<iostream> 
#include<cstdio>
using namespace std;

int main(){
	int n,i,max=0,k=0;
	int score[1001]={0};
	cin>>n;
	for(i=0;i<n;i++){
		int a,b,c;
		scanf("%d-%d %d",&a,&b,&c);
		score[a]+=c;
	}
	for(i=1;i<1001;i++){
		if(score[i]>max){
			k=i;
			max=score[i];
		}
	}
	cout<<k<<' '<<score[k];
	return 0;
}
