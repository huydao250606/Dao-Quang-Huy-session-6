#include<stdio.h>

int main(){
	double tiengoc,lai,thang;
	printf("nhap so tien gui: ");
	scanf("%lf",&tiengoc);
	printf("nhap lai suat: ");
	scanf("%lf",&lai);
	printf("nhap so thang gui: ");
	scanf("%lf",&thang);
	printf("tien lai: %.3lf\n", tiengoc*(lai/100)*thang);
	printf("tien nhan duoc: %.3lf\n",tiengoc+tiengoc*(lai/100)*thang);
	return 0;
}
