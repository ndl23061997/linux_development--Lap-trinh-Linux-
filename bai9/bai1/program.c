#include <stdio.h>


int cong(int a, int b);
int nhan(int a, int b);


int main(int argc, char *args[] ) {
	int a, b;
	printf("Nhap vao a: " );
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);
	printf("Tong %d + %d = %d", a, b, cong(a,b));
	printf("Tich %d + %d = %d", a, b, nhan(a,b));
	return 0;
}
