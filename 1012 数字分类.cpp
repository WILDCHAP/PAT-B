/*结果：		全部通过		*/


#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int N,i,now;
	cin>>N;
	int A[6]; 
	float a4num=0;		//记录符合a4条件的数 
	bool t[6];			//用于确认这五种数是否都出现过 
	bool tag=1;			//用于A2前面的符号 
	for(i=0;i<6;i++){		//初始化数组 
		A[i]=0;
		t[i]=0;
	}
	for(i=0;i<N;i++){		//输入数据 
		cin>>now;
		if(now%5==0 && now%2==0){	//A1:能被 5 整除的数字中所有偶数的和
			A[1]+=now;
			t[1]=1;
		}
		if(now%5==1){				//A2:将被5除后余1的数字按给出顺序进行交错求和
			if(tag)	A[2]+=now;
			else	A[2]-=now;
			t[2]=1;tag=!tag;
		}
		if(now%5==2){				//A3:被 5 除后余 2 的数字的个数
			A[3]++;
			t[3]=1;
		}
		if(now%5==3){				//A4:被 5 除后余 3 的数字的平均数
			A[4]+=now;
			a4num++;
			t[4]=1;
		}
		if(now%5==4){				//A5:被 5 除后余 4 的数字中最大数字
			if(A[5]<now){
				A[5]=now;
				t[5]=1;
			}
		}
	}
	
	for(i=1;i<=5;i++){
		if(i!=1)
			cout<<' ';
		if(i!=4){
			if(t[i]){
			cout<<A[i];
			}
			else{
				cout<<'N';
			}
		}
		else{
			if(t[i]){
				printf("%.1f",(A[4]*1.0)/a4num);
			}
			else{
				cout<<'N';
			}
		}
	} 
	return 0;
} 
