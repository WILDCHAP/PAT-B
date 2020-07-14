/*注意：由于实部、虚部都保留两位小数，所以当A、B的值介于0与-0.01之间时就必须要把它们设置为零*/
/*结果：		全部通过	*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	double r1,r2,p1,p2,a,b;
	cin>>r1>>p1>>r2>>p2;
	a=(r1*r2)*cos(p1+p2);
	b=(r1*r2)*sin(p1+p2);
	if(fabs(a) < 0.01){
        a = 0;
    }
    if(fabs(b) < 0.01){
        b = 0;
    }
    if(b < 0){
        printf("%.2lf-%.2lfi", a, fabs(b));
    }
    else{
        printf("%.2lf+%.2lfi", a, b);
    }
	return 0;
} 
