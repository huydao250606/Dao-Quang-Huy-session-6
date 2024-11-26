#include<stdio.h>

int main(){
	int i,c;
	printf("nhap so nguyen: ");
	scanf("%d",&i);
	for(int a=2;a<i;a++){		
		if(i%a==0){
			printf("%d khong phai so nguyen to!\n", i);
			return 0;
		}
	}
	printf("%d la so nguyen to", i);
	
	return 0;
}
