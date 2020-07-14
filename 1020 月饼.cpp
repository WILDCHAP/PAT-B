/*注意：		库存量和单价最好也定义成float或double,不然精确度差,会出错*/
/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct pro{
	float stock;
	float sale;
	float single;
}pro;

bool cmp(pro a,pro b){
	return a.single>b.single;
}

int main(){
	int type,need;			//种类数和需求量 
	int stock[1000];		//库存量 
	int sale[1000];			//总售价
	int i;
	cin>>type>>need;
	vector<pro> a(type+1);
	for(i=1;i<=type;i++){		//输入数据并计算平均售价 
		cin>>a[i].stock;
	} 
	for(i=1;i<=type;i++){
		cin>>a[i].sale;
		a[i].single=(a[i].sale)/(a[i].stock);
	} 
	sort(a.begin()+1,a.end(),cmp);
	//cout<<a[1].stock<<' '<<a[2].stock<<' '<<a[3].stock;
	//while(need && a[type].stock){	
	float money=0;	
	for(i=1;i<=type;i++){		//有需求且还存在库存的情况 
		if(a[i].stock<=need){		//当前种类货物库存不够 
			money+=a[i].sale;
		}
		else{						//当前种类货物库存够 
			money+=need*a[i].single;
			break;
		}
		need-=a[i].stock;
	}
	printf("%.2f",money); 
	return 0;
} 
