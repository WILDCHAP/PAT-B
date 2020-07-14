/*结果：	全部通过	*/

#include<iostream>
#include<cstring>
using namespace std;

void prin(char *a,int beg,int end){
	for(int i=beg;i<=end;i++){
		cout<<a[i];
	}
}

int main(){
	char fuhao1,fuhao2;	//一个是数的符号,一个是指数的符号 
	cin>>fuhao1;
	if(fuhao1=='-')cout<<'-';	//负号输出,正号不输出
	char num[9999];
	cin>>num;
	int len=strlen(num);
	int pos=len;	//小数点位置
	int beg=0,end=len-1;//数字开始-结束位置 
	int EX=0;			//EX的大小,也就是小数点要向前/后移动多少位
	int pd=1;			//EX的符号 
	int i,k=end,z;
	for(i=0;i<len;i++){		//获取位置 
	 	if(num[i]=='.')	pos=i;
	 	if(num[i]=='E')	{
	 		end=i-1;
	 		switch(num[i+1]){	//E后面的符号 
	 			case '+':	pd=1;break;
	 			case '-':	pd=-1;break;
	 		}
	 		i=i+2;
	 		while((k+1)!=i){	//开始计算EX 
	 			EX=EX*10+(num[i]-'0'); 
	 			i++;
	 		}
	 		break;
	 	}
	} 
	//cout<<beg<<' '<<end<<' '<<pos<<' '<<EX;
	//1.EX为负，小数点向前移，前面数字有(pos-beg)位
	//	1). (pos-beg)>(-EX) 	此时不需要在前面补0
	//	2).	 要在前面补0
	//2.EX为正，小数点向后移，后面数字有(end-pos)位
	//	1).	(end-pos)>=(EX)		此时不需要在后面补0
	//	2).	 要在后面补0
	if(pd<0){	//EX为负
		if((pos-beg)>EX){
			/*for(i=0;i>EX;i--){		//向前移EX位 
				k=num[i+pos];
				num[i+pos]=num[i+pos-1];
				num[i+pos-1]=k;
			}*/
			prin(num,beg,pos-EX-1);
			if(pos!=len)cout<<'.';	//小数点后面有数
			prin(num,pos-EX,pos-1); 
			prin(num,pos+1,end); 
		}
		else{
			cout<<"0.";z=EX-pos-beg;
			while(z--)	cout<<'0';
			prin(num,beg,pos-1);
			prin(num,pos+1,end); 
		} 
	}
	//+0.023E+02	02.3
	else{	//EX为正 
		if((end-pos)>EX){
			if(!(pos-1==beg && num[beg]=='0'))	//特别注意0.几的情况,此时向右移不能保留这个0 
			{
				prin(num,beg,pos-1);
				prin(num,pos+1,pos+EX);
			}
			else{
				k=pos;
				while(num[k+1]=='0')k++;
				prin(num,k+1,pos+EX);
			}
			bool tag=true;
			for(i=beg;i<=pos+EX;i++)
				if(num[i]!='0')tag=false;
			if(!tag)cout<<'.';
			prin(num,pos+1+EX,end); 
		}
		else{
			if(!(pos-1==beg && num[beg]=='0'))	//特别注意0.几的情况,此时向右移不能保留这个0 
				prin(num,beg,pos-1);
			prin(num,pos+1,end); z=EX-(end-pos);
			while(z--)	cout<<'0'; 
		} 
	}
	return 0;
} 
