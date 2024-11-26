#include<stdio.h>

int main(){
	int pass=123;
	int passtest=0;
	int a=0;
	while(a==0){
		printf("nhap password: ");
		scanf("%d",&passtest);
		if (passtest!=pass){
			printf("sai roi!\n");
			while(getchar()!= '\n');
			continue;
		}else{
			printf("dung roi:)\n");
			a=1;
			break;
		}
	}
	return 0;
}
