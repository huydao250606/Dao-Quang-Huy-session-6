#include<stdio.h>

int main(){
	int thang;
	int nam;
	int ngay;
	printf("nhap nam: ");
	scanf("%d",&nam);
	printf("nhap thang 1-12: ");
	scanf("%d",&thang);
	if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
		switch(thang){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				ngay=31;
				break;
			case 4: case 6: case 9: case 11:
				ngay=30;
				break;
			case 2:
			 	ngay=29;
			 	break;
		}
	}else{
		switch(thang){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				ngay=31;
				break;
			case 4: case 6: case 9: case 11:
				ngay=30;
				break;
			case 2:
			 	ngay=28;
			 	break;
	    }
	}
	printf("thang %d nam %d co %d ngay",thang,nam,ngay);
	return 0;
}
