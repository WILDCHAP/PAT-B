/*结果：		全部通过		*/


#include<iostream>
#include<cstdio>
using namespace std;

int pd(char a,char b){		//0:平	1:a赢	2:b赢 
	if(a==b)	return 0;
	if(a=='C'){
		if(b=='J')	return 1;
		else if(b=='B')	return 2;
	}
	if(a=='J'){
		if(b=='C')	return 2;
		else if(b=='B')	return 1;
	}
	if(a=='B'){
		if(b=='C')	return 1;
		else if(b=='J')	return 2;
	}
	return 0;
} 

char compare(int b,int c,int j){
	if(b>=c && b>=j)
		return 'B';
	if(c>=j)
		return 'C';
	return 'J';
}

int main(){
	int N;	cin>>N;		//交手次数 
	int wa=0,pa=0,la=0;
	int wb=0,pb=0,lb=0;
	int ab=0,ac=0,aj=0; 
	int bb=0,bc=0,bj=0; 
	for(int i=0;i<N;i++){
		char a,b;
		cin>>a>>b;
		int k=pd(a,b);
		switch(k){
			case 0:
				pa++;pb++;
				break;
			case 1:
				wa++;lb++;
				switch(a){
					case 'B':	ab++;	break;
					case 'C':	ac++;	break;
					case 'J':	aj++;	break;
				}
				break;
			case 2:
				wb++;la++;
				switch(b){
					case 'B':	bb++;	break;
					case 'C':	bc++;	break;
					case 'J':	bj++;	break;
				}
				break;
		}
	}
	printf("%d %d %d\n%d %d %d\n",wa,pa,la,wb,pb,lb);
	cout<<compare(ab,ac,aj)<<' '<<compare(bb,bc,bj);
	return 0;
} 
