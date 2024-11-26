#include<stdio.h>
#include<math.h>

int main(){
	double a,b,c,delta;
	printf("nhap 3 so de tinh phuong trinh bac 2: \n");
	printf("nhap so thu nhat: ");
	scanf("%lf", &a);
	printf("nhap so thu hai: ");
	scanf("%lf", &b);
	printf("nhap so thu ba: ");
	scanf("%lf", &c);
	if(a==0){
		printf("x=%.2lf",-b/c);
	}else{
		delta=b*b-4*a*c;
		if(delta<0){
			printf("phuong trinh vo nghiem");
		}else if(delta==0){
			printf("phuong trinh co nghiem kep x = %.2lf",-b/(2*a));
		}else{
			printf("phuong trinh co 2 nghiem:\n");
			printf("x1=%.2lf\n",(-b-sqrt(delta))/(2*a));
			printf("x2=%.2lf\n",(-b+sqrt(delta))/(2*a));
		}
	}
	return 0;
}
