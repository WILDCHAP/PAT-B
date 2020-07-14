/*特别注意：	不管是最大,最小,还是减出来的数,都要考虑补0*/
/*结果：		全部通过*/ 


#include<iostream>
#include<algorithm>
using namespace std;
int n[4];

void getn(int N){	//将每一位数拆分到数组n中 
	n[0]=N%10;
	n[1]=(N/10)%10;
	n[2]=(N/100)%10;
	n[3]=N/1000;
}
int getn(){			//获取经排序后的数组n 
	int now=0;
	for(int i=0;i<4;i++)
		now=now*10+n[i];
	return now; 
}
bool bigtomin (int i,int j) { return (i>j); }//降序排列

int main(){
	int N;cin>>N;
	getn(N);
	if(n[0]==n[1] && n[0]==n[2] && n[0]==n[3]){
		if(n[0])
			cout<<N<<" - "<<N<<" = 0000";
		else
			cout<<"0000 - 0000 = 0000";
	}
	else{
		do{
			getn(N);
			if(n[0]==n[1] && n[0]==n[2] && n[0]==n[3]){
				if(n[0])
					cout<<N<<" - "<<N<<" = 0000";
				else
					cout<<"0000 - 0000 = 0000";
			}
			sort(n,n+4);			//从小到大得出最小
			int min=getn();
			sort(n,n+4,bigtomin);	//从大到小的出最大
			int max=getn();
			N=max-min;
			cout<<max<<" - ";
			int k=min;
			while((k/1000)==0){
				k*=10;
				cout<<'0';
			}
			cout<<min<<" = ";
			k=N;
			while((k/1000)==0){
				k*=10;
				cout<<'0';
			}
			cout<<N;
			cout<<endl;
		}while(N!=6174);
	}
	return 0;
} 
