#include<stdio.h>
int main(){
	int a, b;
	printf("Nhap so nguyen a : ");
	scanf("%d", &a);
	printf("Nhap so nguyen b : ");
	scanf("%d",&b);
	float s1 = sqrt(a+sqrt(b+1));
	float s2 = sqrt(b+sqrt(pow(a,2)+pow(b,2)));
	float S= s1+s2;
	printf(" S = %.2f",S);
	return 0;
}
