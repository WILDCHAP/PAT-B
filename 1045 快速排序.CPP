/*参考：https://blog.csdn.net/gq_bob/article/details/49520161*/
/*主要思想：如果当前元素是目前最大的，又和排序后的位置相同，由于没有相同元素，所以就是主元素 */
/*结果：		全部通过	*/ 

#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
	int N;scanf("%d",&N);
	int num[N],num_s[N];
	int i,k=0,max=0,ans[N];
	for(i=0;i<N;i++){
		scanf("%d",&num[i]);
		num_s[i]=num[i];
	}
	sort(num_s,num_s+N);
	for(i=0;i<N;i++){
		if(num[i]>max)		//max记录下当前位置前最大的元素 
			max=num[i];
		if(max==num[i] && num[i]==num_s[i]){	//如果当前元素是目前最大的，
												//又和排序后的位置相同，由于没有相同元素，所以就是主元素 
			ans[k++]=num[i];
		}
	}
	printf("%d\n",k);
	for(i=0;i<k;i++){
		if(i)cout<<' ';
		printf("%d",ans[i]);
	}
	printf("\n");
	return 0;
} 
/*#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;scanf("%d",&n);
	int min[100000]={-999999999};	//前n个元素最大的数
	int num[100000],ans[100000];
	int i,j,k;
	scanf("%d",&min[0]);
	num[0]=min[0];
	for(i=1;i<n;i++){
		scanf("%d",&k);
		num[i]=k;
		if(k>min[i-1])	min[i]=k;
		else	min[i]=min[i-1];
	} 
	k=0;
	for(i=0;i<n;i++){
		bool tag=1;
		if(!i || (i && num[i]>=min[i-1])){
			for(j=n-1;j!=i;j--){
				if(num[j]<num[i]){
					tag=0;break;
				}
			}
			if(tag){
				ans[k++]=num[i];
			}
		}
	}
	cout<<k<<endl;
	for(i=0;i<k;i++){
		if(i)cout<<' ';
		cout<<ans[i];
	}
	return 0;
} */
