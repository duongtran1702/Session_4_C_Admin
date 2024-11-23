#include<stdio.h>

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int a[3];
	for(int i=0;i<3;i++){
		printf("Nhap vao so thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<2;i++){
	for (int j=0;j<3;j++){
		  if (a[j]>a[j+1])
		swap(a[j],a[j+1]);
	   }	
	}
	printf("Day so duoc sap xep la :");
	for(int i=0;i<3;i++){
		printf("%d ",a[i]);
	}
}