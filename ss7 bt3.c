#include<stdio.h>

void main()
{
	int a,b;
	printf("\n nhap vao so a: ");
	scanf("%d",&a);
	printf("\n nhap vao so b: ");
	scanf("%d",&b);
	
	if(a-b==a)
	printf("\n hieu bang gia tri %d",a);
	else if(a-b==b)
	printf("\n hieu bang gia tri %d",b);
	else
	printf("\n hieu ko bang gia tri nao da nhap");
	
	
}
