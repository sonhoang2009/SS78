#include<stdio.h>

void main()
{
	int luong,trocap,luongdung;
	char loainhanvien;
	printf("\n nhap loai nhan vien : ");
	scanf("%c",&loainhanvien);
	printf("\n nhap luong cua nhan vien do : ");
	scanf("%d",&luong);
	
    switch(loainhanvien)
    {
    	case'A':
    		trocap =300;
    		break;
    		case'B':
    			trocap =200;
    			break;
    			default:
    				trocap =100;
    				break;
    			}
    	
	luongdung=luong+trocap;	 	
	printf("\n luong cua nhan vien tren la :%d",luongdung);
	 
}

