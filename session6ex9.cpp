#include<stdio.h>

int main(){
	int a,b,c;
	for(int i=100;i<1000;i++){
		c=i%10;
		b=(i%100)/10;
		a=i/100;
		if(a*a*a+b*b*b+c*c*c==i){
			printf("%d\n",i);
		}
	}
	return 0;
}
