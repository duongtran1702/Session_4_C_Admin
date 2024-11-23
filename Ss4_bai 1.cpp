#include<stdio.h>
int main(){
	printf("Nhap vao mot so nguyen :");
	int n;
	scanf("%d",&n);
	if(n>0) printf("Day la so duong");
	else if (n<0)  printf("Day la so am");
	else printf("Day khong la so am cung khong la so duong");
	return 0;
}