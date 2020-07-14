/*结果：		全部通过	*/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
struct stu{
	char c[9];
	int length;
};
bool f(stu s1,stu s2){
	if(s1.length==s2.length)
	return strcmp(s1.c,s2.c)<0;
	return s1.length>s2.length;
}
void paixu(stu st[],int beg,int end,int m){
	int p[10000];
	int mid=(m/2)+1,i=1;
	p[mid]=beg;	//最高的站中间 
	int t=-1,pos=1;
	for(i=beg+1;i<=end;i++){
		if((mid+t*pos)>=1 &&(mid+t*pos)<=m)
		p[mid+t*pos]=i;
		t=t*-1;
		if(t==-1)pos++;
	}
	for(i=1;i<=m;i++){
		if(i!=1)cout<<' ';
		cout<<st[p[i]].c;
	}
}

int main(){
	int n,k;cin>>n>>k;
	stu st[10000];
	int i,j;
	for(i=0;i<n;i++){
		cin>>st[i].c>>st[i].length;
	}
	sort(st,st+n,f);	//这里从大到小排，便于输出 
	for(i=0;i<k;i++){	//一列一列的输出 
		if(i==0){	//最后一列 
			paixu(st,0,(n/k)+n%k-1,(n/k)+n%k);
		}else
		paixu(st,(n/k)+n%k+(i-1)*(n/k),(n/k)+n%k+(i)*(n/k)-1,(n/k));
		if(i!=k-1)
		cout<<endl;
	}
	return 0;
} 
