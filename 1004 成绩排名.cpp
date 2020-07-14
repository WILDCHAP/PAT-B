/*结果：	全部通过		*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int N;
	cin>>N;
	char maxname[11],minname[11],maxnum[11],minnum[11];
	int maxscore,minscore;
	cin>>maxname>>maxnum>>maxscore;
	strcpy(minname,maxname);
	strcpy(minnum,maxnum);
	minscore=maxscore;
	for(int i=1;i<N;i++){
		char name[11],num[11];
		int score;
		cin>>name>>num>>score;
		if(score>maxscore){
			strcpy(maxname,name);
			strcpy(maxnum,num);
			maxscore=score;
		}
		if(score<minscore){
			strcpy(minname,name);
			strcpy(minnum,num);
			minscore=score;
		}
	}
	cout<<maxname<<' '<<maxnum<<endl;
	cout<<minname<<' '<<minnum<<endl;
	return 0;
} 
