#include<stdio.h>
int main(){
	int month;
	printf("Nhap vao so thang :");
	scanf("%d",&month);
	if(month==1||month==3||month==5||month==7||month==8||month==12||month==10) printf("Thang %d co 31 ngay",month);
	else if(month==4||month==6||month==9||month==11) printf("Thang %d co 30 ngay",month);
	else if(month==2) printf("Thang 2 co 28 ngay");
	else printf("So thang khong hop le !");
	
return 0;	
	
}