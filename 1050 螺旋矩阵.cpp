/*结果：		全部通过	*/

#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m;
bool cmp(const int& a,const int& b){
	return a>b;
}

void getn(int N){
	int k;
	for(int i=1;i<=sqrt(N);i++){
		if(N%i==0){	//能整除 
			k=i;
		}
	}
	n=k;
	m=N/n;
}
int main(){
	int N;cin>>N;//getchar();
	int x=1,y=1,i=0,j=0;
	//int way[][2]={{1,0},{0,1},{-1,0},{0,-1}};
	getn(N);
	int a[m+1][n+1],v[N];
	for(i=0;i<N;i++){
		cin>>v[i];
	}
	sort(v,v+N,cmp);
	memset(a,0,sizeof(a));
	i=0;
	while(i<N){
		for(j=0;j<4&&i<N;j++){	//四个方向 
			switch(j){
				case 0:
					for(int z=1;z<=n;z++){
						if(a[y][x]==0){
							a[y][x]=v[i++];
							x=x+1;
						}
						if(x>n || a[y][x]!=0)//判断下一步是否越界
							break;
					}x--;y++;
					break;
				case 1:
					for(int z=1;z<=m;z++){
						if(a[y][x]==0){
							a[y][x]=v[i++];
							y=y+1;
						}
						if(y>m || a[y][x]!=0) break;
					}y--;x--;
					break;
				case 2:
					for(int z=1;z<=n;z++){
						if(a[y][x]==0){
							a[y][x]=v[i++];
							x=x-1;
						}
						if(x<1 || a[y][x]!=0) break;
					}x++;y--;
					break;
				case 3:
					for(int z=1;z<=m;z++){
						if(a[y][x]==0){
							a[y][x]=v[i++];
							y=y-1;
						}
						if(y<1 || a[y][x]!=0) break;
					}y++;x++;
					break;
			}
		}
	} 
	/*for(i=0;i<N;i++){
		cout<<v[i]<<' ';
	}*/
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(j!=1)cout<<' ';
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
} 

