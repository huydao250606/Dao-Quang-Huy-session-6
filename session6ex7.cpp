#include<stdio.h>

int main(){
	int number;
	int i;
	printf("nhap so nguyen: ");
	scanf("%d",&number);
	printf("uoc cua %d la\n",number);
	for(i=1;i<=number;i++){
		if(number%i==0){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
