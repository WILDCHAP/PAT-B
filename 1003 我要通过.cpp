/*思路参考：https://blog.csdn.net/oShuaiFeng/article/details/80622269*/
/*把a,b,c看成是A	然后当作乘法	*/ 
/*结果：	全部通过	*/


#include<iostream> 
#include<cstring>
using namespace std;

int main(){
	int N;	cin>>N;
	char test[10][101];
	for(int i=0;i<N;i++){
		cin>>test[i];
		int size=strlen(test[i]);
		//cout<<size;
		int FR=0,MI=0,BK=0;		//记录P前，P,T中，T后 A的个数 
		int p=0,a=0,t=0;		//记录p,a,t的个数(题目要求a,t只能是1个,a不能为0) 
		int now=1;				//当前位置：1前  2中  3后 
		for(int j=0;j<size;j++){
			if(test[i][j]=='A'){
				a++;
			}
			else if(test[i][j]=='P'){
				p++;
				now=2;
			}
			else if(test[i][j]=='T'){
				t++;
				now=3;
			}
			else{		//出现了除p,a,t之外的字符，把BK置0 
				BK=0;
				break;
			}
			switch(now){
				case 1:
					FR++;
					break;
				case 2:
					MI++;
					break;
				case 3:
					BK++;
					break;
			}
		}
		if(a && p==1 && t==1 && FR*(MI-1)==(BK-1)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
