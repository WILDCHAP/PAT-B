#include<iostream>
#include<cctype>
using namespace std;

int main(){
	string s1,s2,ans;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++){
		if(s2.find(s1[i])==string::npos && ans.find(toupper(s1[i])) == string::npos)
		ans+=toupper(s1[i]);
	}
	cout<<ans;
	return 0;
}

/*#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){
	char should[80],fact[80];
	int bre[150]={0};
	cin>>should>>fact;
	int len1=strlen(should),len2=strlen(fact);
	int i=0,j=0,k=0;	//分别标识应该,实际,和坏了的键的当前位置
	for(i = 0; i < len1; i++)
     {
         char c1 = should[i];
         for(j = 0; j < len2; j++)
         {
	         char c2 = fact[j];
	         if(c1 >= 'a' && c1 <= 'z')
	             c1 = c1 + 'A' - 'a';
            if(c2 >= 'a' && c2 <= 'z')
                c2 = c2 + 'A' - 'a';
             if(c1 == c2)
	            {
	                 break;
	             }
         }
         if(j == len2 && bre[c1] == 0)
         {
             printf("%c", c1);
             bre[c1] = 1;
         }
     }
	return 0;
} */
