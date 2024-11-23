#include<stdio.h>
int main(){
	int x,y,z;
	printf("Nhap vao lan luot 3 so nguyen :");
	scanf("%d %d %d",&x,&y,&z);
	if((x>z&& z>y)||(x<z&&z<y)) printf("%d nam giua %d va %d",z,x,y);
	else printf("%d khong nam giua %d va %d",z,x,y);
    return 0;	
	
}