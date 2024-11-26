#include<stdio.h>

int main(){
	int number[5];
	int sochan=0;
	int sole=0;
	for(int i=0;i<5;i++){
		printf("nhap so thu %d: ", i+1);
		scanf("%d", &number[i]);
		if(number[i]%2==0){
			sochan++;
		}else{
			sole++;
		}
	}
	printf("so luong so chan la %d\n", sochan);
	printf("so luong so le la %d\n", sole);
	return 0;
}
