/*�����		ȫ��ͨ��*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
typedef struct student{
	int zkzh;	//׼��֤�� 
	int de;
	int cai;	//�·ֺͲŷ� 
	int sum;	//�²��ܷ� 
}student; 

//sort������ĵ������������ȽϺ���
bool compare(student s1, student s2)
{
    if (s1.sum != s2.sum)
            return s1.sum > s2.sum;
    //��ĳ�࿼�����ж����ܷ���ͬʱ������·ֽ������У�
	//���·�Ҳ���У���׼��֤�ŵ����������
    else
    {
        if (s1.de != s2.de)
            return s1.de > s2.de;
        else
            return s1.zkzh < s2.zkzh;
    }
} 

int main(){
	vector<student> v[5];	//����student��������,��ά��СΪ��,һά��С��̬ 
	int N,L,H;//�������������¼ȡ�ߣ�����¼ȡ�� 
	cin>>N>>L>>H;
	//��һ�࿼��:�²ŷ־�����H 
	//�ڶ��࿼��:�¸���H,�ŷ�L~H
	//�����࿼��:�²ŷ־�L~H,�·�>=�ŷ�
	//�����࿼��:�²ŷ־�L~H,�·�<=�ŷ�
	int i;
	int n=0;;
	for(i=1;i<=N;i++){		//����N��������Ϣ 
		student st;
		cin>>st.zkzh>>st.de>>st.cai;
		st.sum=st.de+st.cai;
		if(st.de>=L && st.cai>=L){	//��������L 
			int type;//�������� 
			if(st.de>=H && st.cai>=H) {//��һ�࿼��
				type=1;
			}
			else if(st.de>=H ){//�ڶ��࿼��
				type=2;
			}
			else if(st.de>=st.cai && st.de<H){//�����࿼��
				type=3;
			}
			else{		////�����࿼��
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
��Ҫ�䳤�������ϴ���vector
vec.empty();    			//�ж��Ƿ�Ϊ�գ�Ϊ�շ���true,���򷵻�false;
vec.push_back(temp);		//��vector���Ԫ��
int len = vec.size();		//��ȡvector���Ԫ�ظ���
vector<int>::iterator it;
for(it=vec.begin();it!=vec.end();it++)
							//ʹ�õ�������������
vector�����õ���һЩ�������ܡ����ͷ�ļ� #include<algorithm>

(1)��Ԫ������

sort(vec.begin(),vec.end(),���������);

(2)��ת����

reverse(vec.begin(), vec.end());

(3)����Ԫ��

swap(vec[i],vec[j]);

*/
