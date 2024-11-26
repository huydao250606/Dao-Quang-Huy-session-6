#include<stdio.h>

int main(){
	for(int i=1;i<101;i++){
		if(i%3==0){
			printf("Fizz\n");
			continue;
		}else if(i%5==0){
			printf("Buzz\n");
			continue;
		}else{
			printf("%d\n",i);
			continue;
		}
	}
	
	return 0;
}
