#include<stdio.h>

void main()
{
	int m1,m2,m3,avg;
	
	printf("\n nhap diem mon 1:  ");
	scanf("%d",&m1);
	printf("\n nhap diem mon 2:  ");
	scanf("%d",&m2);
	printf("\n nhap diem mon 3:  ");
	scanf("%d",&m3);
	
	avg=(m1+m2+m3)/3;
	
	
	if(avg>=90)
	printf("\n hoc vien loai E+");
	else if(avg>=80)
	printf("\n hoc vien loai E");
	else if(avg>=70)
	printf("\n hoc vien loai A+");
	else if(avg>=60)
	printf("\n hoc vien loai A");
	else if(avg>=50)
	printf("\n hoc vien loai B+");
	else
	printf("\n hoc vien ROT");
	

	
}


