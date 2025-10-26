#include<stdio.h>
int main(){
	int number;
	printf("Nhap so nguyen co 4 chu so : ");
	scanf("%d",&number);
    int s1 = number %10;
	int s2 = (number/10)%10;
	int s3 = (number/100)%10;
	int s4 = (number/1000)%10;
	int result = s1*1000+s2*100+s3*10+s4;
	printf("So nghich dao la %d",result);
	return 0;
}
