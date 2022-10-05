#include<stdio.h>
int main()
{
	int Rs;
	printf("enter Rs. : ");
	scanf("%d",&Rs);
	
	int hundred_Rs_note=Rs/100;
	int fifty_Rs_note=(Rs%100)/50;
	int ten_Rs_note=(Rs%100)%50/10;
	int five_Rs_note=((Rs%100)%50)%10/5;
	int one_Rs_note=(((Rs%100)%50)%10)%5/1;
	
	printf("This is the total number of currency notes : 100:%d, 50:%d, 10:%d, 5:%d, 1:%d.",hundred_Rs_note,fifty_Rs_note,ten_Rs_note,five_Rs_note,one_Rs_note);
	
	return 0;
}
