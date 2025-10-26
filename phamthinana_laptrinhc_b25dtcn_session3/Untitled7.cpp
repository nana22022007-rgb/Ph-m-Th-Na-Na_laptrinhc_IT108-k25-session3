#include<stdio.h>
int main(){
	int number;
	printf("Nhap so nguyen co 4 chu so : ");
	scanf("%d",&number);
	int s1 = number %10;
	int s2 = (number/10)%10;
	int s3 = (number/10)%10;
	int s4 = (number/10)%10;
	int sum = s1 + s2+s3+s4;
	printf("Tong cac chu so : %d",sum);
	return 0;
}
