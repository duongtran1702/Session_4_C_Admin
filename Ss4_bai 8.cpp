#include<stdio.h>

int main (){
float a,b,c;
printf("Nhap vao 3 canh cua tam giac :");
scanf("%f %f %f",&a,&b,&c);
if(a+b>c&&a+c>b&&b+c>a)	
printf("Day la 3 canh cua tam giac");
else printf("Day khong la 3 canh cua tam giac");
}