/*参考：	https://blog.csdn.net/hy971216/article/details/80554897*/
/*结果：	全部通过	*/ 

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int N,p,i,j,k=0;cin>>N>>p;
	double a[100000];
	for(i=0;i<N;i++){
		cin>>a[i];
	}
	sort(a,a+N);
	double temp,cnt=0;
	for(i=0;i<N;i++){
		temp=a[i]*(p*1.0);	//以a[i]作为最小数
		/*j=0;
		while(temp>=a[i+j+1]) j++;
		if(j>=k) k=j;*/
		for( j=cnt;j<N;j++){
            if(a[j]>temp){//如果不满足条件了，则将下一个元素最为最小值
                break;
            }
            if(j-i>=k){//如果此次的长度大于上一次，更新数列长度
        		k = j-i+1;
        	}
        }
        cnt = j;	//下一次找最大值只要从上次没通过的点开始 
	}
	cout<<k;
	return 0;
} 
