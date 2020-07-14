/*结果：		全部通过*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
typedef struct student{
	int zkzh;	//准考证号 
	int de;
	int cai;	//德分和才分 
	int sum;	//德才总分 
}student; 

//sort函数里的第三个参数：比较函数
bool compare(student s1, student s2)
{
    if (s1.sum != s2.sum)
            return s1.sum > s2.sum;
    //当某类考生中有多人总分相同时，按其德分降序排列；
	//若德分也并列，则按准考证号的升序输出。
    else
    {
        if (s1.de != s2.de)
            return s1.de > s2.de;
        else
            return s1.zkzh < s2.zkzh;
    }
} 

int main(){
	vector<student> v[5];	//定义student类型容器,二维大小为五,一维大小动态 
	int N,L,H;//考生总数，最低录取线，优先录取线 
	cin>>N>>L>>H;
	//第一类考生:德才分均高于H 
	//第二类考生:德高于H,才分L~H
	//第三类考生:德才分均L~H,德分>=才分
	//第四类考生:德才分均L~H,德分<=才分
	int i;
	int n=0;;
	for(i=1;i<=N;i++){		//输入N个考生信息 
		student st;
		cin>>st.zkzh>>st.de>>st.cai;
		st.sum=st.de+st.cai;
		if(st.de>=L && st.cai>=L){	//都不低于L 
			int type;//考生种类 
			if(st.de>=H && st.cai>=H) {//第一类考生
				type=1;
			}
			else if(st.de>=H ){//第二类考生
				type=2;
			}
			else if(st.de>=st.cai && st.de<H){//第三类考生
				type=3;
			}
			else{		////第四类考生
				type=4;
			}
			v[type].push_back(st);
			n++;
		}
	}
	cout<<n<<endl;
	for (i = 1; i <= 4; i++)
    {
    	/*if(i!=1)
			printf("\n");*/
        sort(v[i].begin(), v[i].end(), compare);
        for (int j = 0; j < v[i].size(); j++){
            printf("%d %d %d\n", v[i][j].zkzh, v[i][j].de, v[i][j].cai);
            //if(j!=(v[i].size()-1))
            	//printf("\n");
        }
        
    }
	return 0;
} 

/*
需要变长，容量较大，用vector
vec.empty();    			//判断是否为空，为空返回true,否则返回false;
vec.push_back(temp);		//向vector添加元素
int len = vec.size();		//获取vector里的元素个数
vector<int>::iterator it;
for(it=vec.begin();it!=vec.end();it++)
							//使用迭代器遍历容器
vector经常用到的一些函数功能。需加头文件 #include<algorithm>

(1)对元素排序

sort(vec.begin(),vec.end(),排序规则函数);

(2)反转容器

reverse(vec.begin(), vec.end());

(3)交换元素

swap(vec[i],vec[j]);

*/
