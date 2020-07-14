/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
using namespace std;

struct person{
	char name[6];
	int yy,mm,dd;
};

bool pd(int y,int mm,int dd){
	if(y==2014){
		if(mm==9){
			if(dd<=6)	return true;
			else	return false;
		}
		else if(mm<9)
			return true;
		else
			return false;
	}
	if(y==1814){
		if(mm==9){
			if(dd>=6)	return true;
			else	return false;
		}
		else if(mm>9)
			return true;
		else
			return false;
	}
	if(y<1814 || y>2014)	return false;
	return true;
}

bool compare(person a1,person a2){	//a1>a2 返回true  a1<a2  返回false 
	if(a1.yy>a2.yy)	return 0;
	if(a1.yy<a2.yy)	return 1;
	//年份相当
	if(a1.mm>a2.mm)	return 0;
	if(a1.mm<a2.mm)	return 1;
	//月份相当 
	if(a1.dd>a2.dd)	return 0;
	if(a1.dd<a2.dd)	return 1;
	return false;
}

int main(){
	int n;cin>>n;
	int right=0;
	person old,yonth;
	old.yy=2015;
	yonth.yy=1813;
	for(int i=0;i<n;i++){
		person temp;
		scanf("%s %d/%d/%d",&temp.name,&temp.yy,&temp.mm,&temp.dd);
		//cout<<temp.name<<temp.yy<<temp.mm<<temp.dd;
		if(pd(temp.yy,temp.mm,temp.dd)){
			if(compare(temp,old))	//如果temp比old年长 
				old=temp;
			if(!compare(temp,yonth))	//如果temp比yonth年轻 
				yonth=temp;
			right++;
		}
	}
	if(!right){
		cout<<0;
	}
	else{
		cout<<right<<' '<<old.name<<' '<<yonth.name;
	}
	return 0;
} 
