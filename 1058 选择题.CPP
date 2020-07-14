/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
using namespace std;
struct timu{
	int max;	//满分
	int num;	//选项数
	int rig;	//正确数
	int r[5]={0};	//0:a 1:b 2:c 3:d 4:e 
};
int main(){
	timu t[101];
	int n,m;	//学生数和题目数
	int wrong[101]={0};	//每题错误数
	bool tag=false; 
	cin>>n>>m;
	int i,j;
	for(i=1;i<=m;i++){
		cin>>t[i].max>>t[i].num>>t[i].rig;
		for(j=0;j<t[i].rig;j++){	//输入正确选项 
			char ch;cin>>ch;
			t[i].r[ch-'a']=1;	//r数组置1 
		}
	} 
	for(i=1;i<=n;i++){
		int score=0;
		scanf("\n");
		for(j=1;j<=m;j++){
			if(j!=1)scanf(" ");
			int k;	//学生选项个数
			char c;
			bool tt=true;
			scanf("(%d",&k);
			if(k!=t[j].rig)tt=false;
			for(int q=0;q<k;q++){
				scanf(" %c",&c);
				if(t[j].r[c-'a']!=1)tt=false;
			} 
			scanf(")");
			if(tt){
				score=score+t[j].max;
			}else{
				wrong[j]++;
				tag=true;
			}
		}
		cout<<score<<endl;
	}
	if(!tag)cout<<"Too simple";
	else{
		int max=0;
		for(i=1;i<=m;i++)if(max<wrong[i])max=wrong[i];
		cout<<max;
		for(i=1;i<=m;i++)if(max==wrong[i])cout<<' '<<i;
	}
	//cout<<"ok"; 
	return 0;
}
