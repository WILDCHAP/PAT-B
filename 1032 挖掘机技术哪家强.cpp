/*结果：		全部通过	*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct school{
	int id;
	int score;
};
bool f(school a,school b){
	return a.score>b.score;
}
int main(){
	int n,i;cin>>n;
	vector<school> v(n+1);
	for(i=0;i<n;i++)	v[i].score=0;
	for(i=0;i<n;i++){
		int id,score;
		cin>>id>>score;
		v[id].id=id;
		v[id].score=v[id].score+score;
	}
	sort(v.begin()+1,v.end(),f);
	cout<<v[1].id<<' '<<v[1].score;
	return 0;
} 
