#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao mot so nguyen :");
	scanf("%d",&n);
	if(n%3==0&&n%5==0) printf("Chia het cho ca 3 va 5.");
	else if(n%3==0) printf ("Chi chia het cho 3.");
	else if(n%5==0) printf ("Chi chia het cho 5.");
	else  printf ("Khong chia het cho 3 va 5.");
return 0;	
	
}