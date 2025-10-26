#include<stdio.h>
int main(){
    int n;
    printf("Nhap so nguyen duong >1 :");
    scanf("%d",&n);
    double a = 1.0/((n-1)*n);
    double b = 1.0/(n*(n+1));
    double c = 1.0/((n+1)*(n+2));
    double A = a + b + c;
    printf(" A = %.4f",A);
	return 0;
}
