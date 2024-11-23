#include<stdio.h>

int main(){
	printf("Nhap vao nam :");
	int year;
	scanf("%d",&year);
	if(year<0) {
		printf("Nam khong hop le !");
		return 0;
	}
	else{
		if ((year%4==0&&year%100!=0) || year%400==0) printf("Day la nam nhuan");
		else printf("Day khong phai nam nhuan");
	}
}