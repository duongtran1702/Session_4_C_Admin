#include <stdio.h>

int main(){
	int day,month,year; 
	printf ("Nhap vao ngay :");
	scanf("%d",&day);
	printf ("Nhap vao thang :");
	scanf("%d",&month);
	printf ("Nhap vao nam :");
	scanf("%d",&year);
	if(year<0) {
		printf("Nam khong hop le !");
		return 0;
	}
	if (month>12&&month<1){
		printf("Thang khong hop le !");
		return 0;
	}
	else {
		if((month==1||month==3||month==5||month==7||month==8||month==12||month==10)&&(day>31||day<0)){
			printf("Ngay khong hop le !");
			return 0;
		}
	    else if((month==4||month==6||month==9||month==11)&&(day>30||day<0)){
	        printf("Ngay khong hop le !");
			return 0;	
		}
		else if(month==2&&(day>28||day<0)){
			printf("Ngay khong hop le !");
			return 0;
		}
	}
	printf("\n%d/%d/%d",day,month,year);
	return 0;
}




